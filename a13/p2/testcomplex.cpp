#include <iostream>
/*
CH-230-A
a13 p2.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include "Complex.h"
#include <iostream>
#include <fstream>
#include <istream>
#include <ostream>


using namespace std;

int main() {
	//two ifstream instances
    ifstream  in1, in2;
    in1.open("in1.txt");
    in2.open("in2.txt");
    //checking for error
    if (!in1.good() && !in2.good())
    {
    	cout<<"Error"<<endl;
    }
    if (!in1.is_open() && !in2.is_open())
    {
    	cout<<"Error"<<endl;
    }
    //classes instances
    Complex s1, s2;
    in1 >> s1;
    in2 >> s2;
    cout << s1;
    cout<< s2;
    //overladed operations on classes
    Complex Add, Sub, Mul;
    Add = s1 +s2;
    Sub = s1 - s2;
    Mul = s1 * s2;
    cout <<Add<<endl<<Sub<<endl<<Mul<<endl;
    //output files
    ofstream out1;
    out1.open("output.txt");
    //checking for error
    if (!out1.good())
    {
    	cout<<"Error"<<endl;
    }
    //output in file
    out1 << Add << Sub << Mul<<endl;
    //claosing files
    in1.close();
    in2.close();
    out1.close();
    return 0;
}