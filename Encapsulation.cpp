#include <iostream>
#include <string>

using namespace std; // Add this line to use the std namespace

class Person {
private:
    // Private data members
    string name; // No need for std:: prefix after using namespace std
    int age;

public:
    // Public member functions (getters and setters)
    void setName(const string& newName) {
        name = newName;
    }

    string getName() const {
        return name;
    }

    void setAge(int newAge) {
        // Perform validation if needed
        if (newAge >= 0) {
            age = newAge;
        } else {
            cout << "Invalid age value!" << endl; // No need for std:: prefix
        }
    }

    int getAge() const {
        return age;
    }
};

int main() {
    // Create an object of the Person class
    Person person;

    // Set the private data using public member functions (setters)
    person.setName("John Doe");
    person.setAge(25);

    // Access the private data using public member functions (getters)
    cout << "Name: " << person.getName() << endl; // No need for std:: prefix
    cout << "Age: " << person.getAge() << endl; // No need for std:: prefix

    return 0;
}
