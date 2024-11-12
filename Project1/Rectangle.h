#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include "Shape.h"
using namespace std;

class Rectangle : public Shape {
public:
	Rectangle(double width, double heigth) : width(width), heigth(heigth) {

	}



	~Rectangle() override = default;

	double getArea () const override {
		return this->width * this->heigth;
	}


private:
	double width; 
	double heigth;

};

#endif // !RECTANGLE_H
