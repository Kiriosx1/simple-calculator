#include <iostream>

int main() {
    char op;
    double num1, num2, result;

    std::cout << "********** CALCULATOR ************\n";

    std::cout << "Enter either (+ - * /): ";
    std::cin >> op;

    std::cout << "Enter 1: ";
    std::cin >> num1;

    std::cout << "Enter 2: ";
    std::cin >> num2;

    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                std::cout << "Error: Division by zero!\n";
                return 1;
            }
            break;
        default:
            std::cout << "Invalid operator\n";
            return 1;
    }

    std::cout << "Result: " << result << std::endl;
    std::cout << "*************************************\n";

    // This will keep the terminal open
    std::cout << "Press Enter to exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}
