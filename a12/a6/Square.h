#ifndef SQUARE_H
#define SQUARE_H
#include "Rectangle.h"

class Square: public Rectangle
{
private:
	double side;
public:
	Square(const char* n, double nside);
	~Square();
	double calcArea() const;
	double calcPerm() const;
	
};


#endif // SQUARE_H
