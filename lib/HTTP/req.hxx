#include <curl/curl.h>
#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstdlib>
using namespace std;

class nmap{
    public:
    #ifdef __APPLE__
    void nmap_usage(string url){
    std::string command = "nmap -sV " + url;

    int result = system(command.c_str());
    //! Please use .c_str() function 


    }

    void nmap_verbose_scan(string url){
        string command = "nmap -A"+url;
        int result = system(command.c_str());
        if (result == 0) {cout << "NMAP Scan Completed Successfully!"<< endl;}
        else {cout << "NMAP Scan Failed!"<< endl;}
    }
    #endif
};