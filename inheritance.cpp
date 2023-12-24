#include <iostream>

// Base class
class Animal {
public:
    void eat() {
        std::cout << "Animal is eating." << std::endl;
    }
};

// Another base class
class Vehicle {
public:
    void drive() {
        std::cout << "Vehicle is driving." << std::endl;
    }
};

// Single Inheritance: Bird is a derived class of Animal
class Bird : public Animal {
public:
    void fly() {
        std::cout << "Bird is flying." << std::endl;
    }
};

// Multiple Inheritance: FlyingCar is derived from both Bird and Vehicle
class FlyingCar : public Bird, public Vehicle {
public:
    void hover() {
        std::cout << "FlyingCar is hovering." << std::endl;
    }
};

// Multilevel Inheritance: Penguin is derived from Bird
class Penguin : public Bird {
public:
    void swim() {
        std::cout << "Penguin is swimming." << std::endl;
    }
};

// Hierarchical Inheritance: Fish and Mammal are derived from Animal
class Fish : public Animal {
public:
    void swim() {
        std::cout << "Fish is swimming." << std::endl;
    }
};

class Mammal : public Animal {
public:
    void speak() {
        std::cout << "Mammal is speaking." << std::endl;
    }
};

int main() {
    // Single Inheritance
    Bird myBird;
    myBird.eat();  // Accessing base class method
    myBird.fly();  // Accessing derived class method

    // Multiple Inheritance
    FlyingCar myFlyingCar;
    myFlyingCar.eat();   // Accessing base class method from Bird
    myFlyingCar.drive(); // Accessing base class method from Vehicle
    myFlyingCar.hover(); // Accessing derived class method

    // Multilevel Inheritance
    Penguin myPenguin;
    myPenguin.eat(); // Accessing base class method from Bird
    myPenguin.swim(); // Accessing derived class method

    // Hierarchical Inheritance
    Fish myFish;
    myFish.eat();  // Accessing base class method
    myFish.swim(); // Accessing derived class method

    Mammal myMammal;
    myMammal.eat();   // Accessing base class method
    myMammal.speak(); // Accessing derived class method

    return 0;
}
