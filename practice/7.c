#include <stdio.h>

int substitute_vowels(char *s, char ch)
{	
	int count = 0;

	for (int i = 0; *(s+i) != '\0'; ++i)
	{
		if (*(s+i) == 'a' || *(s+i) == 'e' || *(s+i) == 'i'
			|| *(s+i) == 'o' || *(s+i) == 'u')
		{
			*(s+i) = ch;
			count++;
		}
	}
	return count;
}


int main(int argc, char const *argv[])
{
	char s[] = "This is a sentence";
	printf("%s\n", s);
	int n = substitute_vowels(s, 'o');
	printf("%s\n", s);
	printf("%d\n", n);
	// n = substitute_vowels(s, 'o');

	return 0;
}