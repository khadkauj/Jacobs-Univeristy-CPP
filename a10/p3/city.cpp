/*
CH-230-A
a9 p3.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include <cstring>
#include "City.h"
using namespace std;

	//member function of class to set datas
void city::set_name(string city_name)
{
	name = city_name;
}

void city::set_num_inhab(int n)
{
	num_inhab = n;
}

void city::set_mayor(string mayor_name)
{
	mayor = mayor_name;
}

void city::set_area(double city_area)
{
	area = city_area;
}

	//member function to get datas
string city::get_name()
{
	return name;
}

int city::get_num_inhab()
{
	return num_inhab;
}

string city::get_mayor()
{
	return mayor;
}

double city::get_area()
{
	return area;
}

//member print func to print datas
void city::print()
{
	cout<<name<<" has popln of "<<num_inhab<<"."<<endl;
	cout<<"The mayor is "<<mayor<<". And It's area is "<< area<<endl;
}

