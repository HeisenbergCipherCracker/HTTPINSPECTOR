#include <stdio.h>
#include <stdlib.h>
#ifndef LEVEL
#define LEVEL 1
#endif

void nmap_scan_aggressive(const char* url) {
    #if LEVEL || 1
        printf("Scanning %s\n", url);
        char command[100];
        sprintf(command, "nmap -A %s", url);
        system(command);
    
    #endif
}