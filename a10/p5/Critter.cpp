/*
CH-230-A
a10 p4.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <iostream>
#include "Critter.h"

using namespace std;
//setters
void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger / 10.0;
}

void Critter::setBoredom(int newboredom) {
	boredom = newboredom;
}

void Critter::setHeight(double newheight) {
	height = newheight;
}

string Critter::getName(){
	return name;
}

//returning as int if getter is used
int Critter::getHunger() {
	return hunger * 10;
}

int Critter::getBoredom(){
	return boredom;
}
double Critter::getHeight(){
	return height;
}

//to print class datas
void Critter::print() {
	//while prininting multiplying double by 10 and
	//casting it as int
	cout << "I am " << name << ". My hunger "<<endl;
	cout<<"level is " << (int)(hunger * 10) << "." << endl;
	cout << "My boredom leve is: " << boredom <<endl;
	cout<< " and height is " << height <<endl;
}