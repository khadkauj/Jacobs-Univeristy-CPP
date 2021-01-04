/*
CH-230-A
a11 p6.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include "Vector.h"
#include <cmath>
#include <iostream>
using namespace std;

//constructors

Vector::Vector(){
	size = 3;
	p = new double[size];
	for (int i = 0; i < size; ++i)
	{
		p[i] = 0;
	}
}

Vector::Vector(int nsize, double* nptr){
	size = nsize;
	p = new double[size];
	for (int i = 0; i < size; ++i)
	{
		p[i] = nptr[i];
	}
}

Vector::Vector(const Vector& obj_old){
	// cout<<"copy_constryctr";
	size = obj_old.size;
	p = new double[size];
	for (int i = 0; i < size; ++i)
	{
		p[i] = obj_old.p[i];
	}	
}

//destructor
Vector::~Vector(){
	delete []p;
}


//print function
void Vector::printV(){
	for (int i = 0; i < size; ++i)
	{
		cout<<"p["<<i<<"] = "<< p[i]<<" ";
	}
	cout<<endl;
}

//setters
void Vector::setSize(const int newSize){
	size = newSize;

}

void Vector::setComponents(double* newVptr){
	for (int i = 0; i < size; ++i)
	{
		p[i] = newVptr[i];
	}
}

//getteres
int Vector::getSize() const{
	return size;
}

double* Vector::getComponents() const{
	return p;
}


//additional vector func like add, sub, norm, sclara product

double Vector::norm(){
	double square_sum = 0;
	for (int i = 0; i < size; ++i)
	{
		square_sum = square_sum + p[i] * p[i];
	}
	//square_sum = square_sum ^ 0.5;
	return sqrt(square_sum);
}

//a new vectorobject of vector class
// is created inside add function
//and later printed using print func
Vector Vector::add(const Vector sec_vector) const{
	double* added_vector_ptr;
	added_vector_ptr = new double[sec_vector.size];
	for (int i = 0; i < sec_vector.size; ++i)
	{
		added_vector_ptr[i] = p[i] + sec_vector.p[i];	
	}
	Vector added_vector(sec_vector.size, added_vector_ptr);

	return added_vector;
}

Vector Vector::sub(const Vector sec_vector) const{
	double* sub_vector_ptr;
	sub_vector_ptr = new double[sec_vector.size];
	for (int i = 0; i < sec_vector.size; ++i)
	{
		sub_vector_ptr[i] = p[i] - sec_vector.p[i];
	}
	Vector subtratced_vector(sec_vector.size, sub_vector_ptr);
	return subtratced_vector;
}

Vector Vector::scalar_prod(const Vector sec_vector) const{
	double* mul_vector_ptr;
	mul_vector_ptr = new double[sec_vector.size];
	for (int i = 0; i < sec_vector.size; ++i)
	{
		mul_vector_ptr[i] = p[i] * sec_vector.p[i];
	}
	Vector multiplied_Vector(sec_vector.size, mul_vector_ptr);
	return multiplied_Vector;
}