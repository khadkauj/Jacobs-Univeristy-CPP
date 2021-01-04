/*
CH-230-A
a11 p1.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <iostream>
#include "Box.h"
using namespace std;

//

Box::Box(){
	height = width = depth = 0;
}

Box::Box(double newHeight, double newWidth, double newDepth){
	height = newDepth;
	width = newWidth;
	depth = newDepth;
}

Box::~Box(){

}

Box::Box(const Box &b){
	height = b.height;
	width  = b.width;
	depth= b.depth;
}

//setters
void Box::setHeight(double newHeight){
    height=newHeight;
}

void Box::setWidth(double newWidth){
    width=newWidth;
}

void Box::setDepth(double newDepth){
    depth=newDepth;
}

//getter methods
double Box::getHeight(){
    return height;
}
double Box::getWidth(){
    return width;
}
double Box::getDepth(){
    return depth;
}
//vol
double Box::volume(){
	return depth*width*height;
}
