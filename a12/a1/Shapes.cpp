// please refer to shapes.h for methods documentation

/*
CH-230-A
a12 p1.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
// please refer to shapes.h for methods documentation

#include <iostream>
#include "Shapes.h"
#include <cmath>

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

CenteredShape::CenteredShape(const string& n, double nx,
								 double ny): Shape(n) {
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


RegularPolygon::RegularPolygon(const string& n, double nx,
			 double ny, int nl) :
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

Circle::Circle(const string& n, double nx, double ny, double r) : 
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

//for hexagon
Hexagon::Hexagon(){
	side = 1.0;
	color = "colorless";
}

Hexagon::Hexagon(const string& n, double nx, double ny, int nl,
			double newSide, const string& newColor) :
			 RegularPolygon("Hexagon", nx, ny, 7){
	side =  newSide;
	color = newColor;
}

Hexagon::Hexagon(const Hexagon& old_obj){
	side = old_obj.side;
	color = old_obj.color;
}

Hexagon::~Hexagon(){}

double Hexagon::perimeter() const{
	return 6.0 * side;
}

double Hexagon::area() const{
	double A = (3 * sqrt(3.0)) / 2.0;
	return A * side * side;
}