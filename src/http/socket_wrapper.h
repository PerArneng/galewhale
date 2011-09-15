
#ifndef _SOCKET_WRAPPER_H
#define _SOCKET_WRAPPER_H

#include <functional>
#include <memory>

namespace scalebit { namespace http {

class SocketWrapper {

  private:
    int* socket;
    std::string* address;

  public:
    SocketWrapper(int* socket, std::string* address);
  
    int* get_socket();
  
    std::string* get_address();

    ~SocketWrapper();

    typedef std::shared_ptr<SocketWrapper> ptr;
    typedef std::function<void (SocketWrapper::ptr)> acceptor;

};

} }

#endif
