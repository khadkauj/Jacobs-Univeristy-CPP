/*
CH-230-A
a10 p8.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <iostream>
#include <cmath>                      //needed for sqrt
#include "Complex.h"

using namespace std;  // for cout

Complex::Complex() {  // sets everything to 0
	real = imag = 0;
	cout << "Constructor one is being called" << endl;
}
Complex::Complex(float r, float i) {  // initializes it to a given couple. 
									  // Please note that here it is
	real = r;                         // not necessary to replicate the default value for the second parameter
	imag = i;
	cout << "Constructor two is being called" << endl;
}

//destructor
Complex::~Complex(){

}

Complex::Complex(Complex& obj){
	real = obj.real;
	imag = obj.imag;
}

//setter
void Complex::realSet(float newReal){
	real = newReal;
}

void Complex::imagSet(float newImag){
	imag =  newImag;
}

//getter
float Complex::realGet(){
	return real;
}

float Complex::imagGet(){
	return imag;
}
//methods with class types
Complex Complex::conjugate(){
	Complex conjugator(real, imag * -1);
	return conjugator;
}


//printing method
void Complex::print() {               // prints data to screen via cout
	if (imag) {
		cout << noshowpos << real << showpos << imag << "i" << endl;
	} else {
		cout << noshowpos << real << showpos << endl;
	}

}

//overlaoded functions
//overlaoded friend functions for streams
istream& operator>>(istream& in, Complex& passedObj){
	in>> passedObj.real >>  passedObj.imag;
	return in;
}

ostream& operator<<(ostream& out, const Complex& passedObj){
	if (passedObj.imag){
		out << noshowpos << passedObj.real << showpos << passedObj.imag << "i" << endl;
	} else {
		out << noshowpos << passedObj.real << showpos << endl;
	}
	return out;
}
//Overlaoded addition
Complex Complex::operator+(const Complex &passedObj)
{
    Complex num;
    num.real = real + passedObj.real;
    num.imag = imag + passedObj.imag;
    return num;
}
//Overlaoded subt//Overlaoded multiplicationsracion
Complex Complex::operator-(const Complex &passedObj){
	Complex sub;
	sub.real = real - passedObj.real;
	sub.imag = imag - passedObj.imag;
	return sub;
}
//Overlaoded multiplications
Complex Complex::operator*(const Complex &passedObj){
	Complex mul;
	mul.real = (real * passedObj.real) - (imag * passedObj.imag);
	mul.imag = (real * passedObj.imag) + (imag * passedObj.real);
	return mul;
}
//Overlaoded assignment
Complex& Complex::operator=(const Complex &passedObj){
	this->real = passedObj.real;
	this->imag = passedObj.imag;
	return *this;
}
