#include "nmapa.h"
#include <stdio.h>

int main(int argc, char *argv[]){
    nmap_scan_aggressive(argv[1]);
    return 0;
}