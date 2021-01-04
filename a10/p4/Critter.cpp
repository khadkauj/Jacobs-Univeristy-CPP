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
	hunger = newhunger;
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

int Critter::getHunger() {
	return hunger;
}

int Critter::getBoredom(){
	return boredom;
}
double Critter::getHeight(){
	return height;
}

//to print class datas
void Critter::print() {
	cout << "I am " << name << ". My hunger"<<endl;
	cout<<"level is hunger." << endl;
	cout << "My boredom leve is: " << boredom <<endl;
	cout<< " and height is " << height <<endl;
}
