#include <iostream>
#include "../include/display.h"

using namespace std;


int main() {
    Display display;

    display.setContent("Hello World!\nteste");
    display.show();
    display.setContent("bouh");
    display.show();

    return EXIT_SUCCESS;
}