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
    enum Colors {
        WHITE = 15,
        PINK = 207,
        RED = 196,
        GREEN = 40,
        BLUE = 21,
        BLACK = 16
    };

    explicit Display(Colors defaultTextColor = Colors::WHITE);

    void setTextColor(Colors color);

    void saveCursorPosition();

    void goBackToCursorPosition();

    void show();

    void show(std::string string);

    void setContent(std::string string);

    void clear();
};

#endif //REFACTOR_DISPLAY_H
