#include<stdio.h>

int transpose(int (*arr)[5], int row, int col);

int main(){

   int arr[5][5];    
   int i, j, row,col;

printf ("Enter the number of rows in the matrix\n");
scanf("%d", &row);

   printf ("Enter the number of columns in matrix\n");

scanf("%d", &col);

printf("Enter elements of the Matrix:\n");  

    for(i = 0; i < row; i++){

        for(j = 0; j < col; j++){
           scanf("%d", &arr[i][j]);
        }
    }
   

   printf("Original Matrix:\n");  

    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
           printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

   transpose(arr, row, col);   
   
   return 0;   
}



int transpose(int (*arr)[5], int row, int col){
   int i, j;
   int trans[5][5];

   for(i = 0; i < row; i++){ 
        for(j = 0; j < col; j++){

            trans[j][i] = (*arr)[j]; 
   }
     arr++;
    }

   printf("\n Transpose is :\n");
    
   for(i = 0; i < col; i++){
        for(j = 0; j < row; j++){
            printf("%d\t", trans[i][j]);
        }
       printf("\n");
    }
 }
