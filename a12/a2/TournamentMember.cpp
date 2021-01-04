/*
CH-230-A
a12 p2.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include "TournamentMember.h"
#include <cstring>
#include <iostream>

using namespace std;

//static method initialization
std::string TournamentMember::location = "BremenHaven";

//constructors
TournamentMember::TournamentMember(){
	cout<<"empty constructor called"<<endl;
	strcpy(firstName, "NoFirstName");
	strcpy(lastName,"Nolastname");
	strcpy(DOB, "yyyy-mm-dd");
	age = 0;
	weight = 0.0;
	role = "None";
}



TournamentMember::TournamentMember(const char* newFirsN, 
				const char* newLastN,const char* newDOB, int newAge,
				float newWeight,const string& newRole){
	cout<<"Parametirc constructor called"<<endl;
	strcpy(firstName, newFirsN);
	strcpy(lastName,newLastN);
	strcpy(DOB, newDOB);
	age = newAge;
	weight = newWeight;
	role  = newRole;
}


TournamentMember::TournamentMember(const TournamentMember& passedObject){
	cout<<"copy  constructor called"<<endl;
	strcpy(firstName, passedObject.firstName);
	strcpy(lastName, passedObject.lastName);
	strcpy(DOB, passedObject.DOB);
	age = passedObject.age;
	weight = passedObject.weight ;
	role  = passedObject.role;
}


TournamentMember::~TournamentMember(){
	cout<<"Destructor called"<<endl;
}

void TournamentMember::printDetailsofMembers(){
	cout<<" S/he is "<< firstName <<" "<< lastName;
	cout<<". His/her DOB is "<<DOB<<" ,age is ";
	cout<<age<<" ,and weight is "<<weight;
	cout<<".  His/her role is "<<role;
	cout<<" The location is "<<location<<". "<<endl;
}

void TournamentMember::changeLocation(const string& newLocation){
	location = newLocation;
}
