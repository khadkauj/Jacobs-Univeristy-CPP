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

//methods that has object as parametes
Complex Complex::add(Complex &object_2nd){
	Complex comNum_adder(real + object_2nd.real, imag + object_2nd.imag);
	return comNum_adder;
}

Complex Complex::sub(Complex &object_2nd){
	Complex comNum_subtracter(real - object_2nd.real, imag - object_2nd.imag);
	return comNum_subtracter;
}

Complex Complex::mul(Complex &object_2nd){
	Complex comNum_multiplier(
				(real * object_2nd.real - imag * object_2nd.imag), 
				(imag * object_2nd.real + real * object_2nd.imag));
	return comNum_multiplier;
}

//printing method
void Complex::print() {               // prints data to screen via cout
	if (imag) {
		cout << noshowpos << real << showpos << imag << "i" << endl;
	} else {
		cout << noshowpos << real << showpos << endl;
	}

}