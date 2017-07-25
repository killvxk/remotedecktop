//
// PROJECT:         Aspia Remote Desktop
// FILE:            ipc/pipe_channel.h
// LICENSE:         Mozilla Public License Version 2.0
// PROGRAMMERS:     Dmitry Chapyshev (dmitry@aspia.ru)
//

#ifndef _ASPIA_IPC__PIPE_CHANNEL_H
#define _ASPIA_IPC__PIPE_CHANNEL_H

#include "base/scoped_object.h"
#include "base/synchronization/waitable_event.h"
#include "base/threading/thread.h"
#include "base/macros.h"
#include "protocol/io_buffer.h"

#define ASIO_STANDALONE
#define ASIO_HEADER_ONLY
#define ASIO_HAS_MOVE
#define ASIO_HAS_STD_SYSTEM_ERROR
#define ASIO_HAS_CONSTEXPR
#define ASIO_HAS_STD_ARRAY
#define ASIO_HAS_STD_SHARED_PTR
#define ASIO_HAS_STD_ATOMIC
#define ASIO_HAS_STD_CHRONO
#define ASIO_HAS_STD_FUNCTION
#define ASIO_HAS_STD_ADDRESSOF
#define ASIO_HAS_STD_TYPE_TRAITS
#define ASIO_HAS_CSTDINT
#define ASIO_HAS_STD_THREAD
#define ASIO_WINDOWS
#define ASIO_HAS_GETADDRINFO
#define ASIO_HAS_THREADS

#ifdef NDEBUG
#define ASIO_DISABLE_BUFFER_DEBUGGING
#endif // NDEBUG

#include <asio.hpp>

#include <memory>
#include <queue>

namespace aspia {

class PipeChannel : protected Thread
{
public:
    virtual ~PipeChannel();

    static std::unique_ptr<PipeChannel> CreateServer(std::wstring& channel_id);
    static std::unique_ptr<PipeChannel> CreateClient(const std::wstring& channel_id);

    class Delegate
    {
    public:
        virtual ~Delegate() = default;
        virtual void OnPipeChannelMessage(const IOBuffer& buffer) = 0;
        virtual void OnPipeChannelConnect(uint32_t user_data) = 0;
        virtual void OnPipeChannelDisconnect() = 0;
    };

    bool Connect(uint32_t user_data, Delegate* delegate);
    void Disconnect();

    using CompleteHandler = std::function<void()>;

    void Send(IOBuffer buffer, CompleteHandler handler);
    void Wait();

private:
    enum class Mode { SERVER, CLIENT };

    PipeChannel(HANDLE pipe, Mode mode);

    void ScheduleWrite();
    void OnWriteSizeComplete(const std::error_code& code, size_t bytes_transferred);
    void OnWriteComplete(const std::error_code& code, size_t bytes_transferred);
    void ScheduleRead();
    void OnReadSizeComplete(const std::error_code& code, size_t bytes_transferred);
    void OnReadComplete(const std::error_code& code, size_t bytes_transferred);
    void DoDisconnect();
    void Run() override;

    const Mode mode_;
    Delegate* delegate_ = nullptr;
    uint32_t user_data_ = 0;

    asio::io_service io_service_;
    std::unique_ptr<asio::io_service::work> work_;
    asio::windows::stream_handle stream_{ io_service_ };

    std::queue<std::pair<IOBuffer, CompleteHandler>> write_queue_;
    std::mutex write_queue_lock_;

    IOBuffer write_buffer_;
    uint32_t write_size_ = 0;

    IOBuffer read_buffer_;
    uint32_t read_size_ = 0;

    DISALLOW_COPY_AND_ASSIGN(PipeChannel);
};

} // namespace aspia

#endif // _ASPIA_IPC__PIPE_CHANNEL_H
