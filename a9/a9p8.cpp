/*
CH-230-A
a9 p8.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <iostream>
#include <new>
using namespace std;

void subtract_max(int *p, int n)
{
	int temp = p[0];
	/*sdtermining highest no*/
	for (int i = 1; i < n; ++i)
	{
		if (temp < p[i])
		{
			temp = p[i];
		}
	}
	/*subtracting eaach elems by higest no*/
	for (int i = 0; i < n; ++i)
	{
		p[i] = p[i] - temp;
	}
}

void deallocate(int *a)
/*deallocation of memory*/
{
	delete [] a;
}


int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	int *a;
	/* new allocates memory*/
	a = new int [n];

	/*although not taught; in c++ it
	checks if memory was allocated
	catch (bad_alloc xa)
	{
		cout << "Allocation Failure\n";
		return 1;
	} */

	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	subtract_max(a, n);
	for (int i = 0; i < n; ++i)
	/*printing output to check if program works*/
	{
		cout<<a[i]<<endl;
	}
	deallocate(a);
	return 0;
}