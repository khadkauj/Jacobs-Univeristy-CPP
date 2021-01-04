#include <iostream>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"
#include <ctime>

int main(int argc, char const *argv[])
{	
	//seed for random value
	srand(time(0));
	//array of colors
	char color_array[4][7] = {"RED", "BLACK", "VIOLET", "BLUE"};
	//25 pointers that will be pointed to respective classes
	Area *list[25];
	for (int i = 0; i < 25; ++i)
	{
		if (rand() % 4 == 0)
		{
			list[i] = new Circle(color_array[ rand() % 4], 5 + (rand() % 96));
		}
		else if (rand() % 4 == 1)
		{
			list[i] = new Rectangle(color_array[ rand() % 4 ], 5 + rand() % 96, 5 +(rand() % 96));
		}
		else if (rand() % 4 == 2)
		{
			list[i] = new Ring(color_array[ rand() % 4 ], 5 + rand() % 96, 5 + (rand() % 96) );
		}
		else if(rand() % 4 == 3)
		{
			list[i] = new Square(color_array[ rand() % 4 ], 5 + (rand() % 96) );
		}
	}
	//printing area and perimeter of all classes
	for (int i = 0; i < 25; ++i)
	{
		cout<<list[i]->calcArea()<<endl;
		cout<<list[i]->calcPerm()<<endl;
	}
	return 0;
}