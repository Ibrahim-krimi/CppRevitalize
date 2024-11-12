#include <iostream>
#include "Triangle.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Shape.h"
#include <vector>

#include <memory>

using namespace std;


int main() {

	vector<Shape*> shapes;
	shapes.push_back(new Circle(4.5));
	shapes.push_back(new Rectangle(2.0, 4.0));
	shapes.push_back(new Triangle(2.0, 4.0));
	for (const auto& shape : shapes) {
		std::cout << "Aire de la forme : " << shape->getArea() << std::endl;
	}

	for (auto& shape : shapes) {
		delete shape;
	}
	return 0;

}