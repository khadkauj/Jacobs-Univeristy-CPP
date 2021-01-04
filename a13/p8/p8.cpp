/*
CH-230-A
a13 p8.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <iostream>
#include <exception>
using namespace std;

class Motor 
{
public:
	Motor(){
		throw "This motor has problems";
	};
	//~Motor();
	
};

class Car : public Motor
{
public:
	Car() : Motor(){};
	//~Car();
private:
	Motor m;	
};

class Garage : public Car
{
public:
	Garage() try : Car(){}
	catch(const char* newS) {
		cerr << newS << endl;
		throw "The car in this garage has problems with the motor";
	};	
	//~Garage();
private:
	Car c;
};


int main(int argc, char const *argv[])
{
	try
	{
	Garage g;		
	}
	catch(const char* ch)
	{
		cerr << ch << endl;
	}
	return 0;
}
