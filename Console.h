#include <string>
#include <vector>

#ifndef CONSOLE_H
#define CONSOLE_H

class Console {
   public:
    Console();
    void printBoard(std::vector<std::vector<int> > board);
    int getRow();
    int getCol();
    int getVal();

   private:
    int getIntInput(std::string message);
};

#endif
