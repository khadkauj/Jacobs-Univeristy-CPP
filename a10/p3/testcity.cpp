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

int main(int argc, char const *argv[])
{
	//instances of class city
	city Bremen, Paris, London;

	//details of each city
	cities_details(Bremen);
	Bremen.print();

	cities_details(Paris);
	Paris.print();

	cities_details(London);
	London.print();

	return 0;
}

//details of each city
//calling setters to set data in instances
void cities_details(city &a)
{

	string cities_name;
	getline(cin, cities_name);
	a.set_name(cities_name);

	int cities_population;
	cin>>cities_population;
	a.set_num_inhab(cities_population);

	string cities_mayor;
	cin.get();
	getline(cin, cities_mayor);
	a.set_mayor(cities_mayor);

	double cities_area;
	cin>>cities_area;
	a.set_area(cities_area);
	cin.get();
}