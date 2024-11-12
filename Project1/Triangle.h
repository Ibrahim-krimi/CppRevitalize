#ifndef TRIANGLE_H
#define TRIANGLE_H
#define _USE_MATH_DEFINES
#include "Shape.h"
#include <iostream>
#include <cmath>

using namespace std;

class Triangle : Shape
{
public:
	
	Triangle(double base,double heigth): base(base) , heigth(heigth){
	}

	~Triangle() override = default;

	double getArea () const override{
		return this->base * 0.5 * this->heigth;
	}
private:
	double base;
	double heigth;

};



#endif // !



