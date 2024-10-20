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
