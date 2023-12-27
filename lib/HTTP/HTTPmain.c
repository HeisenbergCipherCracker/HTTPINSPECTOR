#include <stdio.h>
#include "HTTP.h"


int main(int argc, char *argv[]) {
    send_http_req(argv[1]);
    return 0;
}