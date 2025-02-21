#include <iostream> // Include the iostream library for input and output

using namespace std; // Use the standard namespace to avoid typing 'std::' before every standard library function

int main()
{
    // Declare a variable to control the loop
    char continueProgram = 'y';

    // Start a loop that will continue until the user decides to exit
    while (continueProgram == 'y' || continueProgram == 'Y') {
        // Print a welcome message to the console
        cout << "Hello! Welcome to the interactive C++ program." << endl;

        // Declare a variable to store the user's name
        string name;

        // Ask the user for their name
        cout << "Please enter your name: ";
        cin >> name; // Read the user's input and store it in the 'name' variable

        // Greet the user by their name
        cout << "Nice to meet you, " << name << "!" << endl;

        // Declare a variable to store the user's age
        int age;

        // Ask the user for their age
        cout << "How old are you? ";
        cin >> age; // Read the user's input and store it in the 'age' variable

        // Print a message based on the user's age
        if (age < 18) {
            cout << "You are a minor." << endl;
        } else {
            cout << "You are an adult." << endl;
        }

        // Show a summary of the information entered by the user
        cout << "\nSummary of the information entered:" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        if (age < 18) {
            cout << "Status: Minor" << endl;
        } else {
            cout << "Status: Adult" << endl;
        }

        // Ask the user if they want to try again
        cout << "\nDo you want to try again? (y/n): ";
        cin >> continueProgram; // Read the user's input and store it in the 'continueProgram' variable

        // Print a goodbye message if the user decides to exit
        if (continueProgram != 'y' && continueProgram != 'Y') {
            cout << "Thank you for using the program. Goodbye!" << endl;
        }
    }

    return 0; // Return 0 to indicate that the program ended successfully
}