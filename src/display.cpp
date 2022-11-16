//
// Project name : LAB 05 - Refactor
// Project members :
// - Florian Duruz
// - Aellen Quentin
//

#include <iostream>

#ifdef _WIN32

#include <windows.h>

#elif __unix__

#include <stdlib.h>

#endif

#include "../include/display.h"

Display::Display(Colors defaultTextColor) {
    this->setTextColor(defaultTextColor);
#ifdef _WIN32
    system(("chcp " + std::to_string(CP_UTF8)).c_str()); // Set terminal to utf-8 with support of colors
#endif
}

void Display::setTextColor(Display::Colors color) {
    this->prefix = "\x1b[38;5;" + std::to_string(color) + "m";
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

void Display::show(std::string string) {
    this->setContent(string);
    this->show();
}

void Display::setContent(std::string string) {
    this->content = std::move(string);
}

void Display::clear() {
#ifdef _WIN32
    system("cls");
#elif __unix__
    system("clear");
#endif
}
