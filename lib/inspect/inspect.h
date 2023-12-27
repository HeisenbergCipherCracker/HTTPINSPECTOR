#include <stdio.h>


size_t write_callback(void* contents, size_t size, size_t nmemb, void* userp) {
    size_t total_size = size * nmemb;
    printf("Received data:\n%s\n", (char*)contents);
    return total_size;
}