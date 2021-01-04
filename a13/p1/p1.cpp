
/*
CH-230-A
a13 p1.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <fstream>  
#include <iostream>
using namespace std;
#include <cstdlib>
#include <cstring>

int main(int argc, char const *argv[])
{
	string fname; 
	cin >> fname;  
	ifstream in(fname);
	if (!in.good()) {
	    cout << "Error" << endl; 
	    exit (1); 
	}
	//check for error while opening file
	if (!in.is_open()) {
	    cout << "Error opeing the input file" << endl; 
	    exit (15);
	}
	//putting_copy
	string substring = fname.substr(0, fname.find_last_of('.'));
	string rest = fname.substr(fname.find_last_of('.'),fname.length());
	string output = substring + "_copy" + rest; 

	//checking for error in output
	ofstream out(output);
	if (!out.good()) { 
	    cout << "Error opening the output file" << endl; 
	    exit (2);

	}

	char c;
	//copying until eof
	while (in.get(c)) { 
	    out << c; 
	}

	//closing the files
	in.close(); 
	out.close(); 
	return 0; 
} 