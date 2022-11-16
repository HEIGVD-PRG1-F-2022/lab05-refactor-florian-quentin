//
// Project name : LAB 05 - Refactor
// Project members :
// - Florian Duruz
// - Aellen Quentin
//

#include <iostream>
#include "iomanip"

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


void Display::drawTopFrame(int sizeHorizontal)
{
    std::cout << TOP_LEFT_PIPE;
    std::cout << std::setfill(HORIZONTAL_PIPE) << std::setw(sizeHorizontal);
    std::cout << TOP_RIGHT_PIPE << "\n";
}

void Display::drawBottomFrame(int sizeHorizontal)
{
    std::cout << BOT_LEFT_PIPE;
    std::cout << std::setfill(HORIZONTAL_PIPE) << std::setw(sizeHorizontal);
    std::cout << BOT_RIGHT_PIPE << '\n';
}

void Display::DisplayGrid(const std::vector<std::vector<char>> &grid, bool border, bool insideSeparation)
{
    drawTopFrame(grid[0].size());
    for (int y = 0; y < grid.size(); ++y)
    {
        std::cout << '\t' << grid.size()-y-1 << std::setfill(' ') << std::setw((grid.size()-y-1 > 9) ? 2 : 3);
        std::cout << VERTICAL_PIPE;
        for (int x = 0; x < grid.at(y).size(); ++x)
        {
            char cellValue = grid.at(y).at(x) ? grid.at(y).at(x) : ' ';
            std::cout << cellValue << ' ';
        }
        std::cout << VERTICAL_PIPE << '\n';
    }
    std::cout << '\t' << "   ";
    drawBottomFrame(grid[0].size());
}

std::string Display::setTextColor(std::string text, Display::Colors color) {
    text = "\x1b[38;5;" + std::to_string(color) + "m" + text + "\x1b[0m";
    return std::string(text);
}

