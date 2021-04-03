package lte.my;

simple MyExtTCPSocket 
{
    parameters:
        @class(inet::MyExtTCPSocket);
        @display("i=device/server");
    gates:
        input in;
        output out;
}
