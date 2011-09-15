
#ifndef _SOCKET_LISTENER_H
#define _SOCKET_LISTENER_H

#include <functional>
#include <memory>

#include <socket_wrapper.h>

namespace scalebit { namespace http {

void listen_port(int port, SocketWrapper::acceptor acceptor);

} }

#endif


