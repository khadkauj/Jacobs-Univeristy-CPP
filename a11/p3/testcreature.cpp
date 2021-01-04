/*
CH-230-A
a11 p3.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <iostream>
#include "Creature.h"

int main()
{ 
    cout << "Creating an Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    cout<< "\nCreating a Jumping Kangaroo\n";
    Running_kangaroo r;
    r.run();
    r.running_jumping();


    cout<<"\nCreating a Mighty Hanuman\n";
    Blazing_Hanuman h;
    h.run();
    h.blazing();
    return 0;
}