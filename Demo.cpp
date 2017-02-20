#include<iostream>
#include<stdlib.h>
#include "Rect.h"
#include "Circle.h"
using namespace std;

int main(void) {
	Shape *shape1 = new Rect(3.1,6.5);
	//调用不到子类的函数，必须给父类的成员函数添加virtual
	Shape *shape2 = new Circle(3);
	
	shape1->calArea();
	shape2->calArea();

	delete shape1;//只执行父类的析构函数
	delete shape2;
	shape1 = NULL;
	shape2 = NULL;

	system("pause");
	return 0;
}