#include <iostream>

#include <http_server.h>

using namespace std;
using namespace scalebit::http;

int main() {
  cout << "GALE WHALE" << endl;
  
  HttpServer server(8080, 8);
  server.start();

  return EXIT_SUCCESS;
}
