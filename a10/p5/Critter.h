#include <iostream>
#include <string> // defines standard C++ string class
using namespace std;
/* First C++ class */

/*[2:24 PM] Lipskoch, Kinga
    yes, it is fine, for additional simplification you can do the following
​[2:25 PM] Lipskoch, Kinga
    make 2 methods inside of private: one with converts int to double and second which converts double to int
​[2:25 PM] Lipskoch, Kinga
    then call one of these in the places you need them: constructors, setters, getters and print
​[2:25 PM] Lipskoch, Kinga
    it will make your code look nicer
​[2:25 PM] Lipskoch, Kinga
    more structured
*/


class Critter
{
private:  // data members are private
	std::string name;
	//re-initialize hunger as double
	//no-use of functiob but instead
	//dividing or multiplying by 10 whereever needed
	double hunger;
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
		hunger = 5.0/10.0;
		boredom =0;
		height = 0;
	}
	//constr. with only name
	Critter(string newName)
	{
		cout<<"constructor with (Name) being called"<<endl;
		name = newName;
		hunger = 0.0;
		boredom =0;
		height = 5;	
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