#include<iostream>
#include "Shape.h"
using namespace std;

Shape::Shape()
{
	cout << "Shape::Shape()" << endl;
}

Shape::~Shape()
{
	cout << "Shape::~Shape()" << endl;
}

double Shape::calArea() {
	cout << "double Shape::calArea()" << endl;
	return 0;
}