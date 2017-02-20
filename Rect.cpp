#include<iostream>
#include "Rect.h"
using namespace std;

Rect::Rect(double width, double height)
{
	m_dWidth = width;
	m_dHeight = height;
	cout << "Rect::Rect(double width, double height)" << endl;
}

Rect::~Rect()
{
	cout << "Rect::~Rect()" << endl;
}

double Rect::calArea() {
	cout << "double Rect::calArea() " << endl;
	return m_dWidth * m_dHeight;
}
