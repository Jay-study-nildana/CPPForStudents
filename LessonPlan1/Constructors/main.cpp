#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // Default Constructor
    // This constructor is called when no arguments are provided.
    Student() {
        name = "Unknown";
        age = 0;
        cout << "Default constructor called." << endl;
    }

    // Parameterized Constructor
    // This constructor is called when arguments are provided.
    Student(string studentName, int studentAge) {
        name = studentName;
        age = studentAge;
        cout << "Parameterized constructor called." << endl;
    }

    // Copy Constructor
    // This constructor is called when an object is initialized from another object.
    Student(const Student &other) {
        name = other.name;
        age = other.age;
        cout << "Copy constructor called." << endl;
    }

    // Destructor
    // This is called when the object is destroyed.
    ~Student() {
        cout << "Destructor called for " << name << "." << endl;
    }

    // Member function to display student details
    void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    // Using Default Constructor
    Student student1;
    student1.display();

    // Using Parameterized Constructor
    Student student2("Alice", 20);
    student2.display();

    // Using Copy Constructor
    Student student3 = student2; // Copy constructor is called here
    student3.display();

    return 0; // Destructor will be called for all objects when they go out of scope
}
