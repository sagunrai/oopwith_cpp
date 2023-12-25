#include <iostream>
#include <string>

class Person {
private:
    // Private data members
    std::string name;
    int age;

public:
    // Public member functions (getters and setters)
    void setName(const std::string& newName) {
        name = newName;
    }

    std::string getName() const {
        return name;
    }

    void setAge(int newAge) {
        // Perform validation if needed
        if (newAge >= 0) {
            age = newAge;
        } else {
            std::cout << "Invalid age value!" << std::endl;
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
    std::cout << "Name: " << person.getName() << std::endl;
    std::cout << "Age: " << person.getAge() << std::endl;

    return 0;
}
