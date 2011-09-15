
#ifndef _SOCKET_LISTENER_H
#define _SOCKET_LISTENER_H

#include <functional>
#include <memory>

namespace scalebit { namespace http {

class Socket {
  private:
    int* socket;

  public:
    Socket(int* socket);
  
    int* get_socket();

    ~Socket();

  typedef std::shared_ptr<Socket> ptr;
  typedef std::function<void (Socket::ptr)> acceptor;

};

void listen_port(int port, Socket::acceptor acceptor);

} }

#endif


