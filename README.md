# Exp-14-Inheritance
# Aim
Write a c++ program:
1. To do single inheritence.
2. To do multiple inheritance.
3. To do multilevel inheritance.
4. To do hierarchical inheritance.
# Software Used
VS Code and c++ online compiler.
# Theory
Inheritance is a fundamental concept in C++ and object-oriented programming (OOP) that allows a new class (derived class) to inherit properties and behaviors (methods) from an existing class (base class). This mechanism promotes code reusability and establishes a natural hierarchy between classes.

It facilitates the creation of new classes based on existing ones, enhancing code organization, reuse, and scalability.
# Program Code
```
//Single inheritence

#include <iostream>
using namespace std;

class Vehicle {
public:
    void start() {
        cout << "Vehicle started." << endl;
    }
    void stop() {
        cout << "Vehicle stopped." << endl;
    }
};

class Car : public Vehicle {
public:
    void honk() {
        cout << "Car honking!" << endl;
    }
};

int main() {
    Car myCar;          
    myCar.start();      
    myCar.honk();       
    myCar.stop();       
    return 0;
}
```
```
//Multiple inheritance

#include <iostream>
using namespace std;

class Engine {
public:
    void startEngine() {
        cout << "Engine started." << endl;
    }
};

class Wheels {
public:
    void rotate() {
        cout << "Wheels are rotating." << endl;
    }
};

class Car : public Engine, public Wheels {
public:
    void drive() {
        cout << "Car is driving." << endl;
    }
};

int main() {
    Car myCar;          
    myCar.startEngine(); 
    myCar.rotate();      
    myCar.drive();       
    return 0;
}
```
```
//Multilevel inheritance

#include <iostream>
using namespace std;

class Vehicle {
public:
    void start() {
        cout << "Vehicle started." << endl;
    }
};

class Car : public Vehicle {
public:
    void drive() {
        cout << "Car is driving." << endl;
    }
};

class SportsCar : public Car {
public:
    void turboBoost() {
        cout << "Sports car activated turbo boost!" << endl;
    }
};

int main() {
    SportsCar mySportsCar; 
    mySportsCar.start();    
    mySportsCar.drive();    
    mySportsCar.turboBoost(); 
    return 0;
}
```
```
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
```
# Output
### Single inheritence
![image](https://github.com/user-attachments/assets/eb651b8a-041a-45f0-b498-36630699550c)
### Multiple inheritance
![image](https://github.com/user-attachments/assets/43324645-7726-4829-b5c7-ff5b72a1c122)
### Multilevel inheritance
![image](https://github.com/user-attachments/assets/f901196c-6267-4c42-9f2f-34f181ec419a)
### Hierarchical inheritance
![image](https://github.com/user-attachments/assets/8a04e847-f0e8-4a07-b8be-35aea9c808e7)

# Conclusion
We learnt to do multiple inheritance, single inheritance, multilevel and hierarchical inheritance.
