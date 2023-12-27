#include <stdio.h>
#include <curl/curl.h>

#define LEVEL 1


void send_http_req(const char* url){
    CURL *curl;
    CURLcode res;
    curl = curl_easy_init();
    if (curl){
        curl_easy_setopt(curl, CURLOPT_URL, url);
        res = curl_easy_perform(curl);
        if(res != CURLE_OK){
            fprintf(LEVEL, "curl_easy_perform() failed: %s\n", curl_easy_strerror(res));
        }
        curl_easy_cleanup(curl);
    }

}