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
