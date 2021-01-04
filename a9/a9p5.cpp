/*
CH-230-A
a9 p5.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

int main(int argc, char const *argv[])
{
	srand ( static_cast < unsigned int >( time (0) ) );
	int random_num = rand();
	/*getting random num, and putting it in range of
	1 to 100*/
	if (random_num > 100)
	{
		random_num = random_num % 101;
	}
	int guess_num;
	int tries = 0;
	while(1)
		/*run loop until you succeed*/
	{
		cin>>guess_num;
		/*no of tries*/
		tries++;
		if (guess_num == random_num)
			/*if succeed, break*/
		{
			cout<<"congtrs"<<endl;
			break;
		}
		else if (guess_num < random_num)
		{
			cout<< "higher than your num"<<endl;
		}
		else
		{
			cout<< "lower than your num"<<endl;
		}
	}
	return 0;
}