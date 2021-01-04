/*
CH-230-A
a9 p3.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

//class city
class city
{
//private details
private:
	string name;
	int num_inhab;
	string mayor;
	double area;
//accessile functions
public:
	void set_name(string city_name);
	void set_num_inhab(int n);
	void set_mayor(string mayor_name);
	void set_area(double city_area);
	string get_name();
	int get_num_inhab();
	string get_mayor();
	double get_area();
	void print();

};

void cities_details(city &a);
