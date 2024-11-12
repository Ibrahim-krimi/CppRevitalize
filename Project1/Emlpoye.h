#ifndef EMPLOYE.h
#include <iostream>
#include <string>

using namespace std;

class Employe {
private : 
	int salary;
	string name;
public:

	void setSalary(int salary) {
		this->salary = salary;
	}
	
	int getSalary(){
		return this->salary;
	}

};

#endif // !1
