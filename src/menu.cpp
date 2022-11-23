//
// Project name : LAB 05 - Refactor
// Project members :
// - Florian Duruz
// - Aellen Quentin
//

#include "../include/menu.h"

Menu::Menu(std::vector<std::string> &options, Display &display) : display(display), options(options) {
    options.emplace_back("Exit");
}

void Menu::show() {
    std::string tmp;
    for (std::size_t i = 0; i < options.size(); ++i) {
        tmp += std::to_string(i) + ". " + options.at(i) + '\n';
    }
    display.setContent(tmp);
    display.show();
}
