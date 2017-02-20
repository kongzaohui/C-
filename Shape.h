#ifndef SHAPE_H //避免重复包含
#define SHAPE_H

#include <string>
#include<iostream>
using namespace std;

class Shape
{
public:
	Shape();
	virtual~Shape();//定义虚析构函数
	virtual double calArea();
};

#endif // !SHAPE_H
