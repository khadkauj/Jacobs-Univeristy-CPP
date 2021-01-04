/*
CH-230-A
a10 p8.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>


// simple class for complex numbers

class Complex{

private:  // internal implementation is hidden
	float real;  // real part
	float imag;  // imaginary part

public:
	Complex();                 // empty constructor
	Complex(float, float = 0); // constructor taking values for real and
							   // imaginary parts. Imaginary defaults to 0
	Complex(Complex&);
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
	void print();
	//overloaded functions
	Complex operator +(const Complex&);
	Complex operator -(const Complex&);
	Complex operator *(const Complex&);
	Complex& operator =(const Complex&);
	//overlaoded freind fucntion for streams
	friend std::istream& operator >>(std::istream& in, Complex&);
	friend std::ostream& operator <<(std::ostream& out, const Complex&);
};