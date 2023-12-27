#include "ettercap.hxx"

int main(int argc, char *argv[]){
    #ifdef __APPLE__
    ettercap(argv[1],argv[2],argv[3]);
    #endif
    return 0;
}