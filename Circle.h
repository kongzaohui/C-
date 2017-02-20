#ifndef CIRCLE_H //Á×§K­«Î`¥]§t
#define CIRCLE_H
#include "Coordinate.h"

#include <string>
#include<iostream>
#include "Shape.h"
using namespace std;

class Circle:public Shape
{
public:
	Circle(double r);
	~Circle();
	double calArea();
protected:
	double m_dR;
	Coordinate *m_pCenter;
};

#endif // !SHAPE_H
