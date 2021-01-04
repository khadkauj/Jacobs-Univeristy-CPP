/*
CH-230-A
a9 p2.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <iostream>
#include <string> 
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	double x;
	string s;
	/*input*/
	cin >> n;
	cin >> x;
	/*removing end line*/
	cin.get();
	getline(cin, s);

	for (int i = 0; i < n; ++i)
	/*n outputs with endline after x*/
	{
		cout << s << ":" << x << endl;
	}
	return 0;
}