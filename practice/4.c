#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>





bool passchecker(const char* arr){
	if ( strlen(arr) <= 8)
	{
		return false;
	}
	int count = 0;
	for (int i = 0; i < strlen(arr); ++i)
	{
		if (isdigit(*(arr + i)))
		{
			count= count + 1;
		}

	}
	if (count <3)
	{
		return false;
	}
	return true;
}





int main(int argc, char const *argv[])
{
	const char n[50] = "dhsfsskcbkjdnc";
 	printf("%d", passchecker(n));
	return 0;
}