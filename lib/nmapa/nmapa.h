#include <stdio.h>
#include <stdlib.h>
#ifndef LEVEL
#define LEVEL 1
#endif

void nmap_scan_aggressive(const char* url) {
    #if LEVEL == 1
        printf("Scanning %s\n", url);
        char command[100];
        sprintf(command, "nmap -A %s", url);
        system(command);
    
    #endif
}

void nmap_verbose_scan(const char* url){
    #if LEVEL == 2
        printf("Scanning %s\n", url);
        char command[100];
        sprintf(command, "nmap -vv %s", url);
        system(command);
    
    #endif
}

void nmap_decoy_scan(const char* url){
    #if LEVEL == 2 
        printf("Scanning %s\n", url);
        char command[100];
        sprintf(command, "nmap -D RND:3 %s", url);
    
    #endif
}

void nmap_version_system_scan(const char* url){
    #if LEVEL ==  3
        printf("Scanning %s\n", url);
        char command[100];
        sprintf(command, "nmap -sV %s", url);
        system(command);
    #endif
}