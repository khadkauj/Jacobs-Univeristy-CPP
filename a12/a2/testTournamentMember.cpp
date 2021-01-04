/*
CH-230-A
a12 p2.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <iostream>
#include "TournamentMember.h"
using namespace std;

int main(int argc, char const *argv[])
{
	//object called
	//object called by empty contr
	TournamentMember p1;
	p1.printDetailsofMembers();

	//object called by param contr
	TournamentMember p2("Rocky", "Hero", "1999-04-15", 20, 62.5, "Defender");
	p2.changeLocation("Berlin");
	p2.printDetailsofMembers();

	//object called by copy contr
	TournamentMember p3 = p2;
	p2.printDetailsofMembers();
	return 0;
}