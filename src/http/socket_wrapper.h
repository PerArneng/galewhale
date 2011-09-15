
#ifndef _SOCKET_WRAPPER_H
#define _SOCKET_WRAPPER_H

#include <functional>
#include <memory>

namespace scalebit { namespace http {

class SocketWrapper {

  private:
    int* socket;

  public:
    SocketWrapper(int* socket);
  
    int* get_socket();

    ~SocketWrapper();

  typedef std::shared_ptr<SocketWrapper> ptr;
  typedef std::function<void (SocketWrapper::ptr)> acceptor;

};

} }

#endif
