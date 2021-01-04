/*
CH-230-A
a12 p1.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
/* 
	Classic shape examples: an inheritance tree in a geometric context
*/
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>

class Shape {			// base class
	private:   				// private access modifier: could also be protected
		std::string name;   // every shape will have a name
	public:
		Shape(const std::string&);  // builds a shape with a name
		Shape();					// empty shape
		~Shape();					//destructor
		Shape(const Shape&);		// copy constructor
		void printName() const;  	// prints the name  
		void setName(const std::string&); //setter
		std::string getName() const;	//getter
};

class CenteredShape : public Shape {  // inherits from Shape
	private: 
		double x,y;  // the center of the shape
	public:
		CenteredShape(const std::string&, double, double);  // usual three constructors
		CenteredShape(); //empty constructor
		~CenteredShape(); //destructor
		CenteredShape(const CenteredShape&);
		void move(double, double);	// moves the shape, i.e. it modifies it center
		void setX(double); //setter
		void setY(double);	//setter
		double getX() const; //getter
		double getY() const; //geter

};

class RegularPolygon : public CenteredShape { // a regular polygon is a centered_shape with a number of edges
	private: 
		int EdgesNumber;
	public:
		RegularPolygon(const std::string&, double, double, int);
		RegularPolygon();
		~RegularPolygon();
		RegularPolygon(const RegularPolygon&);
		void setEdgesNumber(int);
		int getEdgesNumber() const;
};

class Circle : public CenteredShape {  // a Circle is a shape with a center and a radius
	private:
		double Radius;
	public:
		Circle(const std::string&, double, double, double);
		Circle(); //empty constructor
		~Circle();
		Circle(const Circle&); //copy constr
		void setRadius(const double);	//setters
		double getRadius() const;	//getters
		double perimeter(); 	//perimeter of cirlce
		double area();		//area of cirlce
};


class Hexagon:public RegularPolygon{
private:
	double side;
	std::string color;
public:
	Hexagon(); 	//empty constr
	Hexagon(const std::string&, double, double, int, 
			double, const std::string&); 	//parametric constr
	Hexagon(const Hexagon&); 	//copy constr
	~Hexagon();	//destructor
	double perimeter() const; //perimeter func
	double area() const;	//area func
	void setSide(double);	//setters
	void setColor(const std::string&);
	double getSide()const;		//getters
	std::string getColor()const;
};

    
#endif