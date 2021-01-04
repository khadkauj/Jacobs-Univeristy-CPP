/*
CH-230-A
a12 p3.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <iostream>
#include "TournamentMember.h"
using namespace std;

int main(int argc, char const *argv[])
{
	//commented code can be used to check 
	//the valdiity of program

	Player p1;
	//p1.printAllDeails();

	Player p2("Ramu", "Doner", "1990-06-12", 25, 64.5, "Forward", 101, 3, 1, "Right");
	//p2.printAllDeails();

	Player p3("Jorge", "shane", "1992-05-1", 20, 60.5, "Defence", 101, 3, 4, "left");
	//p3.printAllDeails();

	Player p4("Tumar", "Bialal", "1998-09-10", 22, 70.5, "Center", 101, 3, 1, "Right");
	//p4.printAllDeails();

	p1.changeLocation("Hamburg");
	p2.changeLocation("Hamburg");
	p3.changeLocation("Hamburg");
	p4.changeLocation("Hamburg");

	// p1.printAllDeails();
	// p3.printAllDeails();

	return 0;
}
