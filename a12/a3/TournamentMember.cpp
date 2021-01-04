/*
CH-230-A
a12 p3.c
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


//paramteric constr
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

//copy constr
TournamentMember::TournamentMember(const TournamentMember& passedObject){
	cout<<"copy  constructor called"<<endl;
	strcpy(firstName, passedObject.firstName);
	strcpy(lastName, passedObject.lastName);
	strcpy(DOB, passedObject.DOB);
	age = passedObject.age;
	weight = passedObject.weight ;
	role  = passedObject.role;
}

//destruc
TournamentMember::~TournamentMember(){
	cout<<"Destructor called"<<endl;
}

//print func of base class
void TournamentMember::printDetailsofMembers(){
	cout<<" 	S/he is "<< firstName <<" "<< lastName;
	cout<<". His/her DOB is "<<DOB<<" ,age is ";
	cout<<age<<" ,and weight is "<<weight;
	cout<<".  His/her role is "<<role;
	cout<<". The location is "<<location<<". "<<endl;
}

//change location 
void TournamentMember::changeLocation(const string& newLocation){
	location = newLocation;
}



////methods for player class

//empty constr
Player::Player(){
	cout<<"empty constr in Player class being called"<<endl;
	number = 0;
	position = 0;
	no_of_goals = 0;
	use_of_foot = "NA";
}

//param constr
Player::Player(const char* newFirsN,const char* newLastN,
			const char* newDOB, int newAge,	float newWeight,
			const string& newRole,int newNumber,int newPosition,
			int newGoals, const std::string& footname)
			: TournamentMember(newFirsN, newLastN, newDOB, newAge,
			  newWeight, newRole){
	cout<<"paramertci constr in Player class being called"<<endl;
	number = newNumber;
	position = newPosition;
	no_of_goals = newGoals;
	use_of_foot = footname;
}

//copy constr
Player::Player(const Player& passedObject){
	cout<<"copy constr in Player class being called"<<endl;
	number = passedObject.number;
	position = passedObject.position;
	no_of_goals = passedObject.no_of_goals;
	use_of_foot = passedObject.use_of_foot;
}

//destr
Player::~Player(){
	cout<<"Destructor in Player class being called"<<endl;
}

//print functions
void Player::printAllDeails(){		//prints all details of player
	cout<<" 	Printing all details\n"<<endl;
	this->printDetailsofMembers();
	cout<<" 	Player no is "<<number<<" , position is ";
	cout<<position<<" , no of goals is "<<no_of_goals;
	cout<<" , and uses the "<<use_of_foot<<" foot.\n"<<endl;
}

//increase no of goals
void Player::increaseGoals(int noOfIncrement){
	no_of_goals = no_of_goals + noOfIncrement; 
}
