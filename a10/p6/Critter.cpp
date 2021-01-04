/*
CH-230-A
a10 p6.c
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
//new setter
void Critter::setThirst(double newThirst) {
	thirst = newThirst;
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

double Critter::getThirst(){
	return thirst;
}

//to print class datas
void Critter::print() {
	//while prininting multiplying double by 10 and
	//casting it as int
	//also thirst should be casted but putting off 10 and casting
	//would print thirst as double, its upto programmer to change it
	cout << "I am " << name << ". My hunger ";
	cout<<"level is " << (int)(hunger * 10) << ".";
	cout << " My boredom leve is " << boredom;
	cout<< " and height is " << height;
	cout<<". My thirst is "<<(int)(thirst * 10)<<"." << endl;
}