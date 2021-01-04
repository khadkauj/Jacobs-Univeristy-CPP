/*
CH-230-A
a13 p3.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <iostream>
#include <fstream>
#include <istream>
#include <ostream>
using namespace std;


int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	string s;
	//output file
	ofstream out1;
	out1.open("concatn.txt", ios::out | ios::binary);
	if (!out1.good())
	{
		cout<<"Error";
	}
	//loop for reading n files
	for (int i = 0; i < n; ++i)
	{
		char *memblock;	//to allocate entire file in one char
		ifstream in1;	//input files
		cin >> s;
		in1.open(s, ios::binary |ios::in |ios::ate);
		if (!in1.good())
		{
			cout<<"Error";
		}
		if (!in1.is_open())
		{
		cout<<"Error";
		}
		streampos size_file = in1.tellg();	//to allocate memory for files
		memblock = new char[size_file];
		in1.seekg(0, ios::beg);				//moving back to begining to read file
		in1.read(memblock, size_file);		//file reading
		out1.write(memblock, size_file);	//file writing
		char newLine = '\n';				//newline at the end of file
		out1.write(&newLine, 1);			
		delete []memblock;					//releasing memory
	}
	return 0;
}
