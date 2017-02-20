#include<iostream>
#include "Coordinate.h"
using namespace std;

Coordinate::Coordinate(int x, int y)
{
	cout << "Coordinate::Coordinate()" << endl;
	m_iX = x;
	m_iY = y;
}

Coordinate::~Coordinate()
{
	cout << "~Coordinate::Coordinate()" << endl;
}