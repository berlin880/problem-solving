#include <stdio.h>
#define MAX_ROWS 3
#define MAX_COLS 3

int main()
{
    int A[MAX_ROWS][MAX_COLS]; 
    int B[MAX_COLS][MAX_ROWS];  
    int row, col;
    printf("Enter elements in matrix of size %dx%d: \n", MAX_ROWS, MAX_COLS);
    for(row=0; row<MAX_ROWS; row++)
    {
        for(col=0; col<MAX_COLS; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }
    for(row=0; row<MAX_ROWS; row++)
    {
        for(col=0; col<MAX_COLS; col++)
        {
            
            B[col][row] = A[row][col];
        }
    }
    printf("\nOriginal matrix: \n");
    for(row=0; row<MAX_ROWS; row++)
    {
        for(col=0; col<MAX_COLS; col++)
        {
            printf("%d ", A[row][col]);
        }

        printf("\n");
    }
    printf("Transpose of matrix A: \n");
    for(row=0; row<MAX_COLS; row++)
    {
        for(col=0; col<MAX_ROWS; col++)
        {
            printf("%d ", B[row][col]);
        }

        printf("\n");
    }

    return 0;
}