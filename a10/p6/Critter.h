/*
CH-230-A
a10 p6.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <iostream>
#include <string> // defines standard C++ string class
using namespace std;
/* First C++ class */

class Critter
{
private:  // data members are private
	std::string name;
	double hunger;
	int boredom;
	double height;
	double thirst;

public: // business logic methods are public
	//constructors:
	//first constructor with no paremeters
	Critter()
	{
		cout<<"constructor with (default";
		cout<<"_critter) being called"<<endl;
		name = "default_critter";
		hunger = 5.0/10.0;
		boredom =0;
		height = 0;
		thirst = hunger;
	}
	//constr. with only name
	Critter(string newName)
	{
		cout<<"constructor with (Name) being called"<<endl;
		name = newName;
		hunger = 0.0;
		boredom =0;
		height = 5;	
		thirst = hunger;
	}

	//constr. with all parameters
	//and also a default case
	Critter(string newName, int newhunger, int newboredom, double newheight = 10)
	{
		cout<<"constructor with (all_details) and also";
		cout<<" with a (default case of height) being called"<<endl;
		name = newName;
		hunger = newhunger/10.0;
		boredom = newboredom;
		height = newheight;
		thirst = hunger;
	}

	Critter(string newName, int newhunger, int newboredom, double newheight, double newthirst)
	{
		cout<<"constructor with (all_details) and also";
		cout<<" with a (default case of height) being called"<<endl;
		name = newName;
		hunger = newhunger/10.0;
		boredom = newboredom;
		height = newheight;
		thirst = newthirst;
	}


	// setter methods
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
	void setHeight(double newheight);
	//new setter
	void setThirst(double newThirst);
	// getter method
	string getName();
	int getHunger();
	int getBoredom();
	double getHeight();
	//new getter
	double getThirst();
	// service method
	void print();
};