#include <iostream>
#include <string>
#include "fun.h"

int main() {
    std::string comment;
    std::getline(std::cin, comment);
    std::cout << fun(comment);
    return 0;
}