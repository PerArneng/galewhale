
#include <http_server.h>
#include <iostream>

using namespace std;

namespace scalebit { namespace http {

HttpServer::HttpServer(int port, int numThreads) {
  cout << "starting server on port: " << port << endl;
}

HttpServer::~HttpServer() {
  cout << "destroying http server" << endl;
}

void HttpServer::start() {
  cout << "starting" << endl;
}

} } // namespace scalebit::http
