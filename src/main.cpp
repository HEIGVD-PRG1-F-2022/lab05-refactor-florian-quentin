#include <iostream>
#include "../include/display.h"

using namespace std;


int main() {
    Display display;

    display.setContent("Hello World!\nteste");
    display.show();
    display.setContent("bouh");
    display.show();

    vector<char> xAxis(20);
    vector<vector<char>> grid(10, xAxis);

    display.DisplayGrid(grid);
    
    return EXIT_SUCCESS;
}