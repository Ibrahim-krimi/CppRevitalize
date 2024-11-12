#include <iostream>

#include "Car.h"

using namespace std; 


int main() {

	Car mycar;
	mycar.bip();

	cout << mycar.brand << " " << mycar.model << endl;

	return 0;
}