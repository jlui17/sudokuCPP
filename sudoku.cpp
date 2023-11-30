#include "Console.h"

int main() {
    std::vector<std::vector<int> > board(9, std::vector<int>(9, 0));
    Console console;

    console.printBoard(board);
    return 0;
}
