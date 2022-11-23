//
// Project name : LAB 05 - Refactor
// Project members :
// - Florian Duruz
// - Aellen Quentin
//

#ifndef REFACTOR_MENU_H
#define REFACTOR_MENU_H

#include <vector>
#include "../lib/prg1f-io/include/display.h"

class Menu {
    Display &display;
    std::vector<std::string> &options;
    short exitInputIndex = 0;
public:
    Menu(std::vector<std::string> &options, Display &display);

    void show();

};

#endif //REFACTOR_MENU_H
