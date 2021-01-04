#include <iostream>
#include <string> // defines standard C++ string class
using namespace std;
/* First C++ class */

class Critter
{
private:  // data members are private
	std::string name;
	int hunger;
	int boredom;
	double height;

public: // business logic methods are public
	//constructors:
	//first constructor with no paremeters
	Critter()
	{
		cout<<"constructor with (default";
		cout<<"_critter) being called"<<endl;
		name = "default_critter";
		hunger = 5;
		boredom =0;
		height = 0;
	}
	//constr. with only name
	Critter(string newName)
	{
		cout<<"constructor with (Name) being called"<<endl;
		name = newName;
		hunger = 0;
		boredom =0;
		height = 5;		
	}

	//constr. with all parameters
	//and also a default case
	Critter(string newName, int newhunger, 
			int newboredom, double newheight = 10)
	{
		cout<<"constructor with (all_details) and also";
		cout<<" with (default height) being called"<<endl;
		name = newName;
		hunger = newhunger;
		boredom = newboredom;
		height = newheight;
	}

	// setter methods
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
	void setHeight(double newheight);
	// getter method
	string getName();
	int getHunger();
	int getBoredom();
	double getHeight();
	// service method
	void print();
};