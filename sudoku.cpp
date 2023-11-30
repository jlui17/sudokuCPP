#include "Console.h"

int main() {
    std::vector<std::vector<int> > board(9, std::vector<int>(9, 0));
    Console console;

    console.printBoard(board);
    int r = console.getRow();
    int c = console.getCol();
    int v = console.getVal();
    board[r][c] = v;
    console.printBoard(board);

    return 0;
}
