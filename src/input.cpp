//
// Project name : LAB 05 - Refactor
// Project members :
// - Florian Duruz
// - Aellen Quentin
//

#include <iostream>
#include "../include/input.h"


void Input::showInputCursor() {
    std::cout << "> ";
}

int Input::getConsoleInput() {
    char input;
    this->showInputCursor();
    do {
        std::cin >> input;
    } while(input == '\000');

    return (int) input;
}

int Input::getConsoleInputInt(int min, int max) {
    int input;
    this->showInputCursor();
    do {
        if(std::cin.fail()) {
            std::cin.ignore(256, '\n');
        }
        std::cin >> input;
        std::cin.clear();
    } while (std::cin.fail() || input < min || input >= max);
}
