#include <stdio.h>

void print_matrix(int **A, int rows, int cols)
{
	FILE *fptr;
	fptr = fopen("matrix.dat", "r");
	int arr[8];
	while(feof(fptr)){
		fscanf(fptr, "%d", &arr[i]);
	
		A[arr[2]-1][arr[3]-1] = arr[4]
		A[arr[5]-1][arr[6]-1] = arr[7]
		for (int i = 0; i < rows; ++i)
		{
			for (int j = 0; j < cols; ++j)
			{
				prinft("%d ", Arr[i][j])
			}
		}
	}
}


int main(int argc, char const *argv[])
{
	print_matrix(int **A, int rows, int cols)
	return 0;
}