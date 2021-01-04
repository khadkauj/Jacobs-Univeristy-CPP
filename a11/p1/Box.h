/*
CH-230-A
a11 p1.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <iostream>
//#include "Box.h"
using namespace std;

class Box
{
	double height;
	double width;
	double depth;
public:
	Box();
	Box(double newHeight, double newWidth, double newDepth);
	~Box();
	Box(const Box &b);//copy constructor

	//setters
	void setHeight(double);
	void setWidth(double);
	void setDepth(double);
	//getters
	double getHeight();
	double getWidth();
	double getDepth();
	//vol
	double volume();
};