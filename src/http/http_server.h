
#ifndef _HTTP_SERVER_H
#define _HTTP_SERVER_H

namespace scalebit { namespace http {

    class HttpServer {

      public:
        HttpServer(int port);
        ~HttpServer();
        void start();

    };

} }

#endif
