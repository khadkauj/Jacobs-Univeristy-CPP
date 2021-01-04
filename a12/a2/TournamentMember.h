/*
CH-230-A
a12 p2.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#ifndef TOURNAMENT_MEMBER_H
#define TOURNAMENT_MEMBER_H

#include <string>
#include <cstring>
class TournamentMember
{
private:
	static std::string location;
	char firstName[36];
	char lastName[36];
	char DOB[11];
	int age;
	float weight;
	std::string role; 
public:
	//constcuctors and a destructor
	TournamentMember();
	TournamentMember(const char*, const char*, const char*, int, float, const std::string&);
	TournamentMember(const TournamentMember&);
	~TournamentMember();

	//setters
	void setFirstName( const char*);			//setters
	void setLastName(const char*);
	void setDOB(const char*);
	void setAge(int);
	void setWeight(float);
	void setRole(const std::string&);

	//getters
	char* getFirstName() ;			//getters
	char* getLastName();
	char* getDOB();
	int getAge()const;
	float getWeight()const;
	std::string getRole()const;

	//print and locatin change function
	void printDetailsofMembers();
	static void changeLocation(const std::string&);
	
};


//inline methods

//inline setters
inline	void TournamentMember::setFirstName( const char* newFirsN){
	strcpy(firstName, newFirsN);
}			

inline  void TournamentMember::setLastName(const char* newLastN){
	strcpy(lastName,newLastN);
}

inline	void TournamentMember::setDOB(const char* newDOB){
	strcpy(DOB, newDOB);
}

inline	void TournamentMember::setAge(int newAge){
	age = newAge;
}

inline	void TournamentMember::setWeight(float newWeight){
	weight = newWeight;	
}

inline  void TournamentMember::setRole(const std::string& newRole){
	role  = newRole;
}


//inline getters
inline	char* TournamentMember:: getFirstName() {
	return firstName;
}

inline	char* TournamentMember::getLastName(){
	return lastName;
}

inline	char* TournamentMember::getDOB(){
	return DOB;
}

inline	int TournamentMember::getAge()const{
	return age;
}

inline	float TournamentMember::getWeight()const{
	return weight;
}

inline	std::string TournamentMember::getRole()const{
	return role;
}


#endif // TOURNAMENT_MEMBER_H
