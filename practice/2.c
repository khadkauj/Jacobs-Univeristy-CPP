#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	float f;
	double d;
	scanf("%d", &n);
	scanf("%f", &f);
	scanf("%lf", &d);
	double result = (double) n * (double) f * d;
	printf("%lf", result);
	double *r_ptr;
	double a = 5.0;
	r_ptr = &a;
	result = result + *r_ptr;
	printf("%lf", result);
	return 0;
}