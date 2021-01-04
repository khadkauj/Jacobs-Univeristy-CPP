/*
CH-230-A
a12 p5.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <iostream>
#include "fraction.h"
using namespace std;

Fraction::Fraction()
{
	num = 1;
	den = 1;
}

Fraction::Fraction(int n, int d)
{
	int tmp_gcd = gcd(n, d);

	num = n / tmp_gcd;
	den = d / tmp_gcd;
}

//gcd for factro simplification
int Fraction::gcd(int a, int b)
{
	a = abs(a);
	b = abs(b);
	if (b == 0)
	{
		cout<<"error"<<endl;
		exit(1);
	}
	else if (a == 0)
	{
		return 1;
	}
	else
	{
		while(a != b)
		{
		    if(a > b)
		        a -= b;
		    else
		        b -= a;
		}
		return a;
	}
}

int Fraction::lcm(int a, int b)
{
	return a * b / gcd(a, b);
}
// void Fraction::print()
// {
// 	std::cout << num << "/" << den << std::endl;
// }


//overloaded <<
ostream& operator <<(ostream& out, const Fraction& passedObj)
{
	out << passedObj.num ;
	out << "/";
	out << passedObj.den;
	out << std::endl;
	return out;
}

//overloaded >>
istream& operator >>(istream& in, Fraction& passedObj)
{
	in>> passedObj.num >> passedObj.den;
	return  in;
}


//fraction multiplicaiton
Fraction Fraction::operator *(Fraction& passedObj)
{
	Fraction mul;
	mul.num = this->num * passedObj.num;
	mul.den = this->den * passedObj.den;

	//gcd for factor simplification
	int tmp_gcd = gcd(mul.num, mul.den);
	mul.num = mul.num / tmp_gcd;
	mul.den = mul.den / tmp_gcd;
	if (mul.num < 0 && mul.den <0)
	{
		mul.num = abs(mul.num);
		mul.den = abs(mul.den);
	}
	else if (mul.num < 0 || mul.den <0)
	{
		mul.num = abs(mul.num);
		mul.den = abs(mul.den);
		mul.num = mul.num * -1;
	}
	return mul;
}

//factor division
Fraction Fraction::operator /(Fraction& passedObj)
{
	Fraction div;
	div.num = this->num * passedObj.den;
	div.den = this->den * passedObj.num;

	//gcd for factor simplification
	int tmp_gcd = gcd(div.num, div.den);
	div.num = div.num / tmp_gcd;
	div.den = div.den / tmp_gcd;
	if (div.num < 0 && div.den <0)
	{
		div.num = abs(div.num);
		div.den = abs(div.den);
	}
	else if (div.num < 0 || div.den <0)
	{
		div.num = abs(div.num);
		div.den = abs(div.den);
		div.num = div.num * -1;
	}
	return div;
}

//oerloaded functions

Fraction Fraction::operator +(Fraction& passedObj)
{
	Fraction add;
	//int aux_gcd = gcd(this->den, passedObj.den);
	int aux_lcm = lcm(this->den, passedObj.den);
	int aux_num = this->num * (aux_lcm / this->den) + passedObj.num * (aux_lcm / passedObj.den);
	int tmp_gcd = gcd(aux_num, aux_lcm);
	add.num = aux_num / tmp_gcd;
	add.den = aux_lcm / tmp_gcd;
	if (add.num < 0 && add.den < 0)
	{
		add.num = abs(add.num);
		add.den = abs(add.den);
	}
	else if (add.num < 0 || add.den < 0)
	{
		add.num = abs(add.num);
		add.den = abs(add.den);
		add.num = add.num * -1;		
	}
	return add;
}



Fraction Fraction::operator -(Fraction& passedObj)
{
	Fraction sub;
	int aux_lcm = lcm(this->den, passedObj.den);
	int aux_num = this->num * (aux_lcm / this->den) - passedObj.num * (aux_lcm / passedObj.den);
	int tmp_gcd = gcd(aux_num, aux_lcm);
	sub.num = aux_num / tmp_gcd;
	sub.den = aux_lcm / tmp_gcd;
	if (sub.num < 0 && sub.den < 0)
	{
		sub.num = abs(sub.num);
		sub.den = abs(sub.den);
	}
	else if (sub.num < 0 || sub.den < 0)
	{
		sub.num = - abs(sub.num);
		sub.den = abs(sub.den);
	}
	return sub;
}



Fraction& Fraction::operator =(Fraction& passedObj)
{
	this->num = passedObj.num;
	this->den = passedObj.den;
	return *this; //returns pointer to this
}

//compariosn operaotr returns bool
bool Fraction::operator <(Fraction& passedObj)
{
	int aux = this->den * passedObj.den;
	int num1 = this->num * (aux / this->den);
	int num2 = passedObj.num * (aux / passedObj.den);
	if (num1 < num2)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//compariosn operaotr returns bool
bool Fraction::operator >(Fraction& passedObj)
{
	int aux = this->den * passedObj.den;
	int num1 = this->num * (aux / this->den);
	int num2 = passedObj.num * (aux / passedObj.den);
	if (num1 > num2)
	{
		return true;
	}
	else
	{
		return false;
	}
}