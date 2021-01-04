/*
CH-230-A
a13 p6.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <iostream>
#include <vector>
#include <exception>

using namespace std;
int main(int argc, char const *argv[])
{
	//instance of vector class with 20 positions
	vector<int> v(20, 8);
	//try
	try{
		cout <<v.at(21) <<endl;;
	}
	//catch with an std out_of_range class and what method
	catch(const out_of_range& oor)
	{
		cerr<<"Error: "<<oor.what()<<endl; 
	}

	return 0;
}