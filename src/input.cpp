//
// Project name : LAB 05 - Refactor
// Project members :
// - Florian Duruz
// - Aellen Quentin
//

#include <iostream>
#include "../include/input.h"

int Input::getConsoleInput() {
    char input;
    std::cout << "> ";
    do {
        std::cin >> input;
    } while(input == '\000');

    return (int) input;
}
