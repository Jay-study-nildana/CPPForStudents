#include <iostream>

int main() {
    // Declare variables
    int num1, num2;

    // Interact with the user to get values for these variables
    std::cout << "Enter the first integer: ";
    std::cin >> num1;

    std::cout << "Enter the second integer: ";
    std::cin >> num2;

    // Perform comparisons and display the results using if, else if, and else
    std::cout << "\nComparison results:" << std::endl;

    if (num1 == num2) {
        std::cout << num1 << " is equal to " << num2 << std::endl;
    } else if (num1 != num2) {
        std::cout << num1 << " is not equal to " << num2 << std::endl;
    }

    if (num1 > num2) {
        std::cout << num1 << " is greater than " << num2 << std::endl;
    } else if (num1 < num2) {
        std::cout << num1 << " is less than " << num2 << std::endl;
    }

    if (num1 >= num2) {
        std::cout << num1 << " is greater than or equal to " << num2 << std::endl;
    } else {
        std::cout << num1 << " is less than or equal to " << num2 << std::endl;
    }

    return 0;
}
