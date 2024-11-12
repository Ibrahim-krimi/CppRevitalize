#ifndef CIRCLE_H
#define CIRCLE_H
#define _USE_MATH_DEFINES

#include <iostream>
#include "Shape.h"
#include <cmath>

using namespace std; 

class Circle : public  Shape
{
public:
	Circle(double radius) :radius(radius) {

	}

	~Circle() override = default;

	double getArea() const override {
		return this->radius * this->radius * 3.14;
	}

private:
	double radius;

};

#endif // !CIRCLE_H
