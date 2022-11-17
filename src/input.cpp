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

int Input::getConsoleInputInt(int min, int max) {
    int input;
    std::cout << "> ";
    do {
        if (std::cin.fail()) {
            std::cin.ignore(256, '\n');
        }
        std::cin >> input;
        std::cin.clear();
    } while (std::cin.fail() || input < min || input >= max);
    return input;
}
