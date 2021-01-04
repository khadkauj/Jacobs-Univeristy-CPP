/*
CH-230-A
a2 p7.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <stdio.h>

void printarray(int arrays[30][30], int n)/*to print matrix*/
{
    printf("The entered matrix is:\n");
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            printf("%d ", arrays[i][j]);/*printing elemen of ith row and jth column*/       
        }
        printf("\n");
    }
}
void diagonal_matrix(int arr[30][30], int len)
{
    printf("Under the main diagonal:\n");
 
    for(int i = 0; i < len; i++)
    {
        for(int j = 0; j < len; j++)
        {
            if(i > j)/*checking if it lies under diagonal*/
            printf("%d ", arr[i][j]);
        }
    }
    printf("\n");
    
}
int main()
{
    int n;
    scanf("%d", &n);
    int array[30][30];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            scanf("%d", &array[i][j]);/*scanning values for our matrix*/
        }   
    }
    printarray(array, n);
    diagonal_matrix(array,n);
    return 0;
}