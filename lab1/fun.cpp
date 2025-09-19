#include "fun.h"
#include <string>

std::string fun(const std::string& comment) {
    std::string res;
    std::string vowels = "aeiouyAEIOUY";
    for (char k : comment) {
        if (vowels.find(k) == std::string::npos) {
            res += k;
        }
    }
    return res;
}