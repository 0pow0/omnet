// Rui Zuo


#ifndef _MYEXTTCPSOCKET
#define _MYEXTTCPSOCKET 

#include <thread>
#include "inet/common/lifecycle/ILifecycle.h"

extern "C" {
    #include "unp.h"
}

namespace inet {

class MyExtTCPSocket : public cSimpleModule {
    private:
        int fd;
    protected:
        virtual void initialize(int stage) override;
        virtual void openSocket();
};

Register_Class(MyExtTCPSocket);
} // namespace inet

#endif 
