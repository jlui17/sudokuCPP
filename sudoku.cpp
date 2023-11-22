#include <iostream>

int getIntInput(std::string message) {
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

int main() {
    int row = getIntInput("Row: ");
    int col = getIntInput("Col: ");

    std::cout << "Row: " << row << " Col: " << col;
    return 0;
}
