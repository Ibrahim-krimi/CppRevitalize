#include <iostream>
#include <cmath>
#include <vector>
#include <string>
using namespace std;

int ex1() {
	//string cars[4] = { "Volvo","bmw","Ford","fiat" };
	vector <string> cars = { "Volvo","Buggati","Aston martin" };
	for (const string car : cars)
	{
		cout << car << endl; 
	}

	cars.push_back("Tesla");
	
	for (const string car : cars) {
		cout << car << endl;
	}
	cout << cars.size() << endl;
	cout << sizeof(cars) << endl ;


	return 0;
}