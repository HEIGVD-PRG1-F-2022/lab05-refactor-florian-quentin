#include <thread>
#include "../include/menu.h"

using namespace std;

int main() {

    Display display = Display();

    vector<string> gameOptions = {"Player vs AI", "Player vs Player", "Settings", "Show help"};

    Menu gameMenu = Menu(gameOptions, display);
    while (true) {
        gameMenu.show();
    }
    return EXIT_SUCCESS;
}