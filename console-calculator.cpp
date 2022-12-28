#include <iostream>

double x, y;
char operation;

void printResult(double result);

int main() {
    std::cout << "••••••••••••••••••••••••••••••••••••Calculator••••••••••••••••••••••••••••••••••••" << std::endl;

    std::cout << "Please enter value x: ";
    std::cin >> x;

    if (x == 0) {
        std::cout << "X should be a digit. Terminating...";
        return -1;
    }

    std::cout << "Please enter value y: ";
    std::cin >> y;

    if (y == 0) {
        std::cout << "Y should be a digit. Terminating...";
        return -1;
    }

    std::cout << "Enter operation (+, -, *, /)" << std::endl;
    std::cin >> operation;
    std::cout << "You chose operator: '" << operation << "'" << std::endl;

    switch (operation) {
        case '+':
            printResult(x + y);
            break;
        case '-':
            printResult(x - y);
            break;
        case '*':
            printResult(x * y);
            break;
        case '/':
            if (y == 0) {
                std::cout << "Error: cannot divide by zero";
                break;
            }
            printResult(x / y);

            break;
        default:
            std::cout << "Invalid operator: " << operation << std::endl;
            break;
    }

    return 0;
}

void printResult(double result) {
    std::cout << "Result: " << result << std::endl;

    std::cout << "••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••" << std::endl;
}