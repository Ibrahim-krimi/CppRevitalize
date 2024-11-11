#include <iostream>
#include <cmath>

using namespace std;

int main() {
	string cars[4] = { "Volvo","bmw","Ford","fiat" };
	for(const string car : cars)
	{
		cout << car << endl; 
	}

	return 0;
}