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

    vector<vector<string>> grid(6, vector<string>(6, "0"));
    display.DisplayGrid(grid);
    this_thread::sleep_for(1000ms);

    for(auto& row: grid){
        for(auto& item: row) {
            item =  Display::setTextColor("a", Display::Colors::PINK);
        }
    }
    display.DisplayGrid(grid);
    this_thread::sleep_for(1000ms);

    int age = userInputRange<int>(0, 200, "Quel age as-tu ?", "Mauvais entrée");

    string tmp = "Vous avez " + Display::setTextColor(to_string(age), Display::Colors::RED) + " ans";
    Display::showText(tmp);
    this_thread::sleep_for(1000ms);

    return EXIT_SUCCESS;
}