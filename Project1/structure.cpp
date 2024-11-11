#include <ostream>
 
using namespace std;
struct carType {
	string brand;
	string model;
	int year;
} car1, car2;


int ex3() {


	car1.brand = "Tesla";
	car1.model = "X";
	car1.year = 2022;

	carType car3;
	car3 = car1;

	return 0;
}