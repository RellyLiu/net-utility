/**
 * This work copyright Chao Sun(qq:296449610) and licensed under
 * a Creative Commons Attribution 3.0 Unported License(https://creativecommons.org/licenses/by/3.0/).
 */

#include "../../../../../../../common/buffer.h"

#include "net-stack-worker.h"

namespace netty {
    namespace net {
        PosixTcpNetStackWorker::PosixTcpNetStackWorker(common::MemPool *memPool, PosixTcpClientSocket *socket)
            : ANetStackMessageWorker(memPool), m_pSocket(socket) {}

        bool PosixTcpNetStackWorker::Recv() {

        }

        bool PosixTcpNetStackWorker::Send() {

        }
    } // namespace net
} // namespace netty
