#ifndef VEHICLE_H      
#define VEHICLE_H

#include <iostream>
#include <string>

using namespace std;

class Vehicle {
public:
    string brand = "Ford";

    void bip() {
        cout << "BIIP, Biiiipppp !!" << endl;
    }
};

#endif 
