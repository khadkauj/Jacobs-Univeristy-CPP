#include "Square.h"
#include <iostream>
using namespace std;

Square::Square(const char* n, double nside):
 				Rectangle(n, nside, nside){
	side = nside;
}		

Square::~Square() {}

double Square::calcArea()const{
	std::cout << "calcArea of Square...";
	return side * side;
}

double Square::calcPerm() const{
	std::cout << "calcPerm of Square...";
	return 4.0 * side;
}