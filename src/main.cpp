#include <iostream>
#include <thread>
#include "../include/display.h"
#include "../include/input.h"

using namespace std;

int main() {
    Display display(Display::Colors::PINK);

    Display::showText("Test", Display::Colors::GREEN);
    this_thread::sleep_for(1000ms);

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

    vector<string> xAxis(20);
    vector<vector<string>> grid(10, xAxis);
    for (int i = 0; i < grid.size(); ++i) {
        for (int j = 0; j < grid.at(i).size(); ++j) {
            grid.at(i).at(j) = Display::setTextColor("a", Display::Colors::PINK);
        }
    }

    display.DisplayGrid(grid);

    int age = userInputRange<int>(0, 200, "Quel age as-tu ?", "Mauvais entrée");

    string tmp = "Vous avez " + Display::setTextColor(to_string(age), Display::Colors::RED) + " ans";

    Display::showText(tmp);

    while (true) {
        int a = 1;
    }
    return EXIT_SUCCESS;
}