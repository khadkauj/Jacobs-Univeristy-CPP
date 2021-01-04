/*
CH-230-A
a10 p8.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
using namespace std;

// simple class for complex numbers

class Complex{

private:  // internal implementation is hidden
	float real;  // real part
	float imag;  // imaginary part

public:
	Complex();                 // empty constructor
	Complex(float, float = 0); // constructor taking values for real and
							   // imaginary parts. Imaginary defaults to 0
	Complex(Complex& obj);
	//destructor
	~Complex();
	//setters
	void realSet(float);
	void imagSet(float);
	//getters
	float realGet();
	float imagGet();
	//methods with class types
	Complex conjugate();

	Complex add(Complex &object_2nd);
	Complex sub(Complex& object_2nd);
	Complex mul(Complex& object_2nd);

	void print();
};