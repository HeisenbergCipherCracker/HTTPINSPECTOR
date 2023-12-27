#include <stdio.h>
#include "lib/HTTP/HTTP.h"

int main(int argc, char *argv[]) {
    send_http_req(argv[1]);
    return 0;
}