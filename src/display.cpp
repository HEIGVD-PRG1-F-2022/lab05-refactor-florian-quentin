//
// Project name : LAB 05 - Refactor
// Project members :
// - Florian Duruz
// - Aellen Quentin
//

#include <iostream>
#include "../include/display.h"

void Display::saveCursorPosition() {

}

void Display::show(bool overwrite_prev) {
    std::cout << "\033[s" <<  this->content << std::endl;
}