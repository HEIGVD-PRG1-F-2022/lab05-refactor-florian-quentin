//
// Project name : LAB 05 - Refactor
// Project members :
// - Florian Duruz
// - Aellen Quentin
//

#ifndef REFACTOR_DISPLAY_H
#define REFACTOR_DISPLAY_H

#include <string>

class Display {
    std::string prefix;
    std::string suffix;
    std::string content;
public:
    Display();
    void saveCursorPosition();
    void goBackToCursorPosition();
    void show(bool overwrite_prev = false);
    void setContent(std::string content);
    void clear();
};

#endif //REFACTOR_DISPLAY_H
