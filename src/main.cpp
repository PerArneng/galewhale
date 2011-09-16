#include <iostream>
#include <csignal>

#include <http_server.h>

using namespace std;
using namespace scalebit::http;

HttpServer server(8080, 8);

int main() {

  cout << "GALEWHALE" << endl;
  
  struct sigaction sig_handler;
  sig_handler.sa_handler = [] (int signal) {
    server.shutdown();
  };
  sigemptyset(&sig_handler.sa_mask);
  sig_handler.sa_flags = 0;
  sigaction(SIGINT, &sig_handler, NULL);

  server.start();

  return EXIT_SUCCESS;
}
