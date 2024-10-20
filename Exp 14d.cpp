//Hierarchical inheritance

#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Animal is eating." << endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking." << endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    void meow() {
        cout << "Cat is meowing." << endl;
    }
};

int main() {
    Dog myDog;  // Create an object of the Dog class
    Cat myCat;  // Create an object of the Cat class

    myDog.eat();  // Call method from Animal class
    myDog.bark(); // Call method from Dog class

    myCat.eat();  // Call method from Animal class
    myCat.meow(); // Call method from Cat class

    return 0;
}

