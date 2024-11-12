#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>

using namespace std; 

class Shape
{
public:
				Shape() = default;
		virtual	~Shape() = default;
		virtual	double getArea() const = 0;

};



#endif // !



