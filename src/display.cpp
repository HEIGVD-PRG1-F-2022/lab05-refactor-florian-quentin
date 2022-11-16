//
// Project name : LAB 05 - Refactor
// Project members :
// - Florian Duruz
// - Aellen Quentin
//

#include <iostream>
#include "../include/display.h"

Display::Display(Colors defaultTextColor) {
    this->setTextColor(defaultTextColor);
}

void Display::setTextColor(Display::Colors color) {
    this->prefix = "\x1b[38;5;" + std::to_string(color) +  "m";
    this->suffix = "\x1b[0m";
}

void Display::saveCursorPosition() {
    std::cout << "\033[s";
}

void Display::goBackToCursorPosition() {
    std::cout << "\033[u";
}

void Display::show() {
    std::cout << this->prefix << this->content << this->suffix << std::endl;
}

void Display::setContent(std::string content) {
    this->content = content;
}
