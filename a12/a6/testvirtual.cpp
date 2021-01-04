#include <iostream>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"
 

	/*Diagram showing relation of classes

	// 				Base class Area
	// 				/			\
	// Derived class Circle	 Derived class Reactangle
	// 			|						|
	// Derived class Ring  			Square			*/



const int num_obj = 7;
int main() {
	Area *list[num_obj];						// (1) pointer to base class area that creates
												// 6 objects
	int index = 0;								// (2)initializing value of index to 0 which 
												// we will later use to index our instances
	double sum_area = 0.0;						//(3) initializing value of our sum to 0
												//which we will later use to calc total area
	double sum_perm = 0.0;
	cout << "Creating Ring: ";
	Ring blue_ring("BLUE", 5, 2);				// (4) create a ring of color blue, radius 5 and 
												//inter raidus 2
	cout << "Creating Circle: ";
	Circle yellow_circle("YELLOW", 7);
	cout << "Creating Rectangle: ";
	Rectangle green_rectangle("GREEN",5,6);
	cout << "Creating Circle: ";
	Circle red_circle("RED", 8);
	cout << "Creating Rectangle: ";
	Rectangle black_rectangle("BLACK", 10, 20);
	cout << "Creating Ring: ";
	Ring violet_ring("VIOLET", 100, 5);
	Square grey_square("GREY", 10);
	list[0] = &blue_ring;						// (5) initialize the pointer of type class Area
												// to derived instances 
	list[1] = &yellow_circle;
	list[2] = &green_rectangle;
	list[3] = &red_circle;
	list[4] = &black_rectangle;
	list[5] = &violet_ring;
	list[6] = &grey_square;
	while (index < num_obj) {					// (7) 6 loops to get the color of each derived instances
												// and calculate total area
		(list[index])->getColor();	
		double perimeter = list[index]->calcPerm();			
		double area = list[index++]->calcArea();// (8) first, get the value of area of derived instance
												// and then increment the value of index by 1
		sum_perm += perimeter;
		sum_area += area;
	}
	cout << "\nThe total area is "
			<< sum_area << " units " << endl;	// (9) printig the total area of all  derived instances
	cout<< "\nThe total perimter is "
			<< sum_perm << " unit " << endl;
	return 0;
}
