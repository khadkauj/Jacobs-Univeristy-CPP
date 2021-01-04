/*
CH-230-A
a11 p5.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
// please refer to shapes.h for methods documentation

#include <iostream>
#include "Shapes.h"

using namespace std; 

//for shape
Shape::Shape(){
	name = "\nNo name given\n";
}

Shape::Shape(const string& n) : name(n) {
}
Shape::Shape(const Shape& obj){
	name = obj.name;
}

Shape::~Shape(){
}

void Shape::printName() const {
	cout << name << endl;
}
void Shape::setName(const string& newName){
	name = newName;

}

std::string Shape::getName()const{
	return name;
}









//for centered shapes
CenteredShape::CenteredShape(){
	x = 0;
	y = 0;
}

CenteredShape::CenteredShape(const string& n, 
			double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}

CenteredShape::CenteredShape(const CenteredShape& obj){
	x = obj.x;
	y = obj.y;
}

CenteredShape::~CenteredShape(){

}

void CenteredShape::move(double a, double b){
	x = x + a;
	y = y + a ;
}

void CenteredShape::setX(double newX){
	x = newX;
}

void CenteredShape::setY(double newY){
	y = newY;
}

double CenteredShape::getX() const{
	return x;
}

double CenteredShape::getY() const{
	return y;
} 

//for regular polygon
RegularPolygon::RegularPolygon(){
	EdgesNumber = 3;
}


RegularPolygon::RegularPolygon(const string& n, 
				double nx, double ny, int nl) :
					CenteredShape(n,nx,ny) 
{
	EdgesNumber = nl;
}

RegularPolygon::RegularPolygon(const RegularPolygon& obj){
	EdgesNumber = obj.EdgesNumber;
}

RegularPolygon::~RegularPolygon(){

}

void RegularPolygon::setEdgesNumber(int newEdgenumber){
	EdgesNumber = newEdgenumber;
}

int RegularPolygon::getEdgesNumber()const{
	return EdgesNumber;
}

//for circle

Circle::Circle(){
	Radius = 0;
}

Circle::Circle(const string& n, double nx,
				 double ny, double r) : 
  CenteredShape(n,nx,ny) 
{
	Radius = r;
}

Circle::Circle(const Circle& obj){
	Radius = obj.Radius;
}

Circle::~Circle(){

}

void Circle::setRadius(double newRadius){
	Radius = newRadius;
}

double Circle::getRadius() const{
	return Radius;
}

double Circle::perimeter(){
	const double pie = 22/7.0;
	double perm = 2 * pie * Radius;
	return perm;
}

double Circle::area(){
	const double pie = 22/7.0;
	double a = pie * Radius * Radius;
	return a;
}

//for rectangle
Rectangle::Rectangle(){
	width =  1;
	height = 1;
}

Rectangle::Rectangle(const string& n, double nx, double ny, 
						double nwidth, double nheight) :
						 RegularPolygon(n, nx, ny, 4)
{
	width = nwidth;
	height = nheight;
}

Rectangle::Rectangle(const Rectangle& obj){
	width = obj.width;
	height = obj.height;
}

Rectangle::~Rectangle(){

}

void Rectangle::setWidth(double newWidth){
	  width = newWidth;
}

void Rectangle::setHeight(double newheight){
	height = newheight;
}

double Rectangle::getWidth() const{
	return width;
}

double Rectangle::getHeight() const{
	return height;
}

double Rectangle::perimeter(){
	return (2*(width + height));
}

double Rectangle::area(){
	return width * height;
}

//for square
//square now has 3 side properties but only
//side property is relevant; other properties
//nwidth and nheight are irrelevan while default
//constructors are called
Square::Square(){
	side = 1;
}

Square::Square(const string& n, double nx, 
			double ny, double nside): 
			Rectangle(n, nx, ny, nside, nside){
	side = nside;
}

Square::Square(const Square& obj){
	side = obj.side;
}

Square::~Square(){

}

void Square::setSide(double newside){
	side = newside;
}

double Square::getSide()const{
	return side;
}

double Square::perimeter(){
	return 4 * side;
}

double Square::area(){
	return side * side;
}
