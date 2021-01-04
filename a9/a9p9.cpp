/*
CH-230-A
a9 p9.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <iostream>
#include <ctime>
#include <string>
#include <vector>
using namespace std;

/*func to change vowel to _;
check the guess*/
char strrr(string *str, int n)
{
	char y_n;
	int tries = 0;
	string temp = str[n];
	/*k is len of string*/
	int k = temp.size();
	for (int i = 0; i < k; ++i)
		/*_ in place of vowels*/
	{
		if (temp[i] == 'a' || temp[i] == 'e' ||
			temp[i] == 'i' || temp[i] == 'o' ||
			temp[i] == 'u' || temp[i] == 'A' ||
			temp[i] == 'E' || temp[i] == 'I' ||
			temp[i] == 'O' || temp[i] == 'U')
		{
			cout<<'_';
		}
		else
			/*prints the letter when not vowel*/
		{
			cout<<temp[i];
		}
	}
	cout<<endl;
	cin.get();
	string guess;
	/*guesswords*/
	getline(cin, guess);
	while(guess != "quit")
	{	/*no of tries*/
		tries++;
		if (guess == temp)
		{
			cout<<"congrts. No of tries: "<<tries<<endl;
			cout<<"wanna play again? y/n?"<<endl;
			cin >> y_n;
			/*y or n should be returned; if y is returned
			it loops again otherwise, it stops program*/
			return y_n;
		}
		else
		{
			cout<<"please, try again"<<endl;
		}
		getline(cin, guess);
	}


	if (guess == "quit")
	{
		return 'n';
	}
	
	return 'n';	
}


int main(int argc, char const *argv[])
{
	int n = 18;
	/*array of words in 1d*/
	string str[n] = {"computer", "television",
					"keyboard", "laptop", "mouse",
					"term", "coined", "by", "Donald",
					"Trump" ,"YOU", "SUCK!", "or" ,"LOSER!",
					"or" ,"something", "of"};

	
	char check = 'y';
	/*looping until we get y*/
	while(check == 'y')
	{
		/*random no gnerator*/		srand(static_cast<unsigned int>(time(0)));
		int random_num = rand() % 17;
		check = strrr(str, random_num);
	}
	return 0;
}