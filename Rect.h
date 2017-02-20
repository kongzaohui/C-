#ifndef RECT_H //Á×§K­«Î`¥]§t
#define RECT_H

#include <string>
#include<iostream>
#include "Shape.h"
using namespace std;

class Rect:public Shape
{
public:
	Rect(double width,double height);
	~Rect();
	double calArea();
protected:
	double m_dWidth;
	double m_dHeight;
};

#endif // !RECT_H

