/*
CH-230-A
a11 p6.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <iostream>

class Vector
{
private:
	int size;
	double *p;

public:
	Vector();	//empty constructor
	~Vector();	//destructor
	Vector(int, double*); //parametric constr
	Vector(const Vector&); //copy constr
	void printV(); //print func
	void setSize(const int); //setters
	void setComponents(double*);
	int getSize() const;	//getters
	double* getComponents() const;
	double norm(); 	//norm func
	Vector add(const Vector) const; 	//adder func
	Vector sub(const Vector) const;		//sub func
	Vector scalar_prod(const Vector) const; 	//scalar product func	
};