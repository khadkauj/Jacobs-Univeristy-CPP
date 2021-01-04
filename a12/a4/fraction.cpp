/*
CH-230-A
a12 p4.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <iostream>
#include "fraction.h"
#include <exception>
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

// int Fraction::lcm(int a, int b)
// {
// 	return a * b / gcd(a, b);

// }

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