
#include <string>
#include <iostream>

using namespace std;

void ex4() {
	
	string food = "pizza";
	string* ptr = &food;

	cout << ptr << endl;

	cout << *ptr << endl;

	*ptr = "Hambergeur";

	cout << ptr << endl;

}