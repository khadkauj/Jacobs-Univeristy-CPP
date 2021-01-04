#include <stdio.h>

void total_time(int mins[], int secs[], int n, 
	int *sum_min, int *sum_sec)
{
	int sum1 =0;
	int sum2 = 0;
	for (int i = 0; i < n; ++i)
	{
		 sum1 = sum1 + mins[i] + secs[i] /60;
		 sum2 = sum2 + mins[i] * 60 +  secs[i];
	}
	sum_min = &sum1;
	sum_sec = &sum2;
	printf("%d %d", *sum_min, *sum_sec);
}



int main(int argc, char const *argv[])
{
	int mins[4];
	int secs[4];
	mins[0] = 10;
	secs[0] = 15;
	mins[1] = 40;
	secs[1] = 35;
	int *sum_min;
	int *sum_sec;
	total_time(mins, secs, 2, sum_min, sum_sec);

	return 0;
}