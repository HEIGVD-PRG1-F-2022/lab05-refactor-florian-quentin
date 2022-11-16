#include <iostream>
#include <thread>
#include "../include/display.h"

using namespace std;


int main() {
    Display::showText("Test", Display::Colors::GREEN);
    this_thread::sleep_for(1000ms);

    Display display(Display::Colors::PINK);

    display.saveCursorPosition();
    display.setContent("Hello World!\nteste");
    display.show();
    this_thread::sleep_for(1000ms);

    display.goBackToCursorPosition();
    display.setTextColor(Display::Colors::BLUE);
    display.setContent("bouh");
    display.show();
    this_thread::sleep_for(1000ms);

    display.clear();
    display.show("MAMA");

    this_thread::sleep_for(1000ms);

    vector<char> xAxis(20);
    vector<vector<char>> grid(10, xAxis);

    display.DisplayGrid(grid);

    return EXIT_SUCCESS;
}