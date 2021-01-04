#include <stdio.h>

int main(int argc, char const *argv[])
{
	FILE *fptr;
	fptr=  fopen("lol.txt", "rb+");
	if(fptr == NULL){
		printf("no\n");
	}

	char ch[7] = {'a',' ', 'a', 'a', '\n' };
	for (int i = 0; i < 10; ++i)
	 {
	 	fwrite(ch, sizeof(ch), 1, fptr);
	 } 
	 fclose(fptr);
	return 0;
}