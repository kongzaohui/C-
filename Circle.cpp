#include<iostream>
#include "Circle.h"
using namespace std;

Circle::Circle(double r)
{
	m_dR = r;
	m_pCenter = new Coordinate(3, 5);
	cout << "Circle::Circle(double r)" << endl;
}

Circle::~Circle()
{
	cout << "Circle::~Circle()" << endl;
	delete m_pCenter;
	m_pCenter= NULL;
}

double Circle::calArea() {
	cout << "double Circle::calArea()" << endl;
	return 3.1415926*m_dR*m_dR;
}