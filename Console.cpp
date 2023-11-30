#include "Console.h"

#include <iostream>

Console::Console() {}

void Console::printBoard(std::vector<std::vector<int> > board) {
    for (int r = 1; r < 10; r++) {
        for (int c = 1; c < 10; c++) {
            std::cout << board[r - 1][c - 1];
            if (c != 9)
                if (c % 3 == 0)
                    std::cout << "||";
                else
                    std::cout << "|";
            else
                std::cout << "\n";
        }

        if (r != 9) {
            if (r % 3 == 0)
                std::cout << "= = =  = = =  = = =\n";
            else
                std::cout << "- - -  - - -  - - -\n";
        }
    }
}

int Console::getIntInput(std::string message) {
    std::cout << message;
    int x;
    std::cin >> x;

    while (!std::cin.good()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Please type in an integer.\n";
        std::cout << message;
        std::cin >> x;
    }
    return x;
}
