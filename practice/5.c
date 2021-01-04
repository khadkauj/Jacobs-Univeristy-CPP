#include <stdio.h>


bool odd(unsigned char data){
	return data & 1;
}




int main(int argc, char const *argv[])
{
	bool a = odd('2');
	printf("%d\n", a);

	return 0;
}