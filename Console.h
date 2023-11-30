#include <vector>

#ifndef CONSOLE_H
#define CONSOLE_H

class Console {
   public:
    Console();
    void printBoard(std::vector<std::vector<int> > board);
    int getIntInput(std::string message);
};

#endif
