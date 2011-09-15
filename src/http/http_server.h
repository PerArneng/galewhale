
#ifndef _HTTP_SERVER_H
#define _HTTP_SERVER_H

namespace scalebit { namespace http {

    class HttpServer {

      public:

        HttpServer(int port, int num_threads);

        ~HttpServer();

        void start();

      private:
        int port;
        int num_threads;

    };

} }

#endif
