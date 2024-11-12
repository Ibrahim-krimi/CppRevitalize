#include <iostream>

#include "Car.h"

using namespace std; 


int ex7() {

	Car mycar;
	mycar.bip();

	cout << mycar.brand << " " << mycar.model << endl;

	return 0;
}