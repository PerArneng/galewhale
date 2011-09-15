
#include <http_server.h>
#include <iostream>
#include <socket_listener.h>

using namespace std;

namespace scalebit { namespace http {

HttpServer::HttpServer(int port, int num_threads) {
  cout << "starting server on port: " << port << endl;
  this->port = port;
  this->num_threads = num_threads;
}

HttpServer::~HttpServer() {
  cout << "destroying http server" << endl;
}

void HttpServer::start() {
  cout << "starting" << endl;
  listen_port(this->port);
}

} } // namespace scalebit::http
