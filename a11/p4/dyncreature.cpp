/*
CH-230-A
a11 p4.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <iostream>
#include "Creature.h"

int main()
{ 
    //input of class name string s
    string s;
    std::cin>>s;

    while(s!= "quit")
    {
        //3-if cases for diff derived classes
        if (s == "wizard")
        {
            Wizard *s;
            s = new Wizard;
            s->run();
            s->hover();
            delete s;
        }
        //object1 refers to first derived class
        //Running_kangaroo
        if (s == "object1")
        {
            Running_kangaroo *s;
            s = new Running_kangaroo;
            s->run();
            s->running_jumping();
            delete s;
        }
        
        //object2 refers toseconds derived class
        //Blazing_hanuman
        if (s == "object2")
        {
            Blazing_Hanuman *s;
            s = new Blazing_Hanuman;
            s->run();
            s->blazing();
            delete s;
        }

        std::cin.get();
        std::cin>>s;
    }

    return 0;
}