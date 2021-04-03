#include "MyExtTCPSocket.h"

namespace inet {
    void MyExtTCPSocket::initialize(int stage) {
        openSocket();
    }    

    void MyExtTCPSocket::openSocket() {
        fd = Socket(AF_INET, SOCK_STREAM, 0);
        struct sockaddr_in servaddr;
        bzero(&servaddr, sizeof(servaddr));
        servaddr.sin_family = AF_INET;
        servaddr.sin_port = htons(62700);
        Inet_pton(AF_INET, "127.0.0.1", &servaddr.sin_addr);
        Connect(fd, (SA *) &servaddr, sizeof(servaddr));
        str_cli(stdin, fd);
    }
}




