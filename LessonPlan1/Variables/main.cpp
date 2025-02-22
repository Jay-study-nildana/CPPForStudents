#include <iostream>
#include <string>

int main() {
    // Declare variables of basic types
    int integerVar;
    float floatVar;
    double doubleVar;
    char charVar;
    bool boolVar;
    std::string stringVar;

    // Interact with the user to get values for these variables
    std::cout << "Enter an integer value: ";
    std::cin >> integerVar;

    std::cout << "Enter a float value: ";
    std::cin >> floatVar;

    std::cout << "Enter a double value: ";
    std::cin >> doubleVar;

    std::cout << "Enter a character: ";
    std::cin >> charVar;

    std::cout << "Enter a boolean value (0 for false, 1 for true): ";
    std::cin >> boolVar;

    std::cin.ignore();  // Ignore the newline character left in the buffer
    std::cout << "Enter a string: ";
    std::getline(std::cin, stringVar);

    // Display the values entered by the user
    std::cout << "\nYou entered the following values:" << std::endl;
    std::cout << "Integer: " << integerVar << std::endl;
    std::cout << "Float: " << floatVar << std::endl;
    std::cout << "Double: " << doubleVar << std::endl;
    std::cout << "Character: " << charVar << std::endl;
    std::cout << "Boolean: " << (boolVar ? "true" : "false") << std::endl;
    std::cout << "String: " << stringVar << std::endl;

    return 0;
}
