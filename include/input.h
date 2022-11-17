//
// Project name : LAB 05 - Refactor
// Project members :
// - Florian Duruz
// - Aellen Quentin
//

#ifndef REFACTOR_INPUT_H
#define REFACTOR_INPUT_H

class Input {
    void showInputCursor();
public:
    static int getConsoleInput();
    static int getConsoleInputInt(int,int);
};

#endif //REFACTOR_INPUT_H
