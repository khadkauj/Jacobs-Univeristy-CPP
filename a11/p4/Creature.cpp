/*
CH-230-A
a11 p4.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <iostream>
#include "Creature.h"
using namespace std;

Creature::Creature(): distance(10)
{
	cout<<"\nEmpty constructor of Creature class\n";
}

Creature::~Creature()
{
	cout<<"\nDestructor of Creature class\n";
}   

void Creature::run() const
{ 
    cout << "running " << distance << " meters!\n";
}  


Wizard::Wizard() : distFactor(3)
{
	cout<<"\nEmpty constructor of Wizard class\n";
}  

Wizard::~Wizard()
{
	cout<<"\nDestructor of Wizard class\n";
}

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}


Running_kangaroo::Running_kangaroo() : no_of_jump(7)
{
	cout<<"\nEmpty constructor of Running_kangaroo class\n";
}

Running_kangaroo::~Running_kangaroo()
{
	cout<<"\nDestructor of Running_kangaroo class\n";
}

void Running_kangaroo::running_jumping() const
{
	cout<< "Running and jumping ";
	cout<<distance + no_of_jump * length_of_jump<< endl;
}


Blazing_Hanuman::Blazing_Hanuman(): flying_speed(100), flying_time(5)
{
	cout<<"\nEmpty constructor of Blazing_Hanuman class\n";
}

Blazing_Hanuman::~Blazing_Hanuman()
{
	cout<<"\nDestructor of Blazing_Hanuman class\n"<<endl;
}

void Blazing_Hanuman::blazing() const
{
	cout<<"Hanuma has crossed ";
	cout<<distance + flying_speed * flying_time;
	cout<<" meters"<<endl;
}