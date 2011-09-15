

#include <iostream>

#include <socket_wrapper.h>

namespace scalebit { namespace http {

SocketWrapper::SocketWrapper(int* socket) {
  this->socket = socket;
}

int* SocketWrapper::get_socket() {
  return this->socket;
}

SocketWrapper::~SocketWrapper() {
  std::cout << "destroying socket" << std::endl;
  close(*this->socket);
  free(this->socket);
}

} }
