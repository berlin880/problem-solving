#include <stdio.h>
#define MAX_ROWS 3
#define MAX_COLS 3

int main(){
    int arr[MAX_ROWS][MAX_COLS];
    int arr2[MAX_ROWS][MAX_COLS];
    int i, j, k;
    for(i=0; i<MAX_ROWS; i++){
        for(j=0; j<MAX_COLS; j++){
            scanf("%d", &arr[i][j]);

        }
    }
    k = 1;
    for(i=0; i<MAX_ROWS; i++){
        for(j=0; j<MAX_COLS; j++){
            arr2[i][j] = arr[j][i];
        }
    }
    for (i = 0; i < MAX_ROWS&&k; i++){
        for(j = 0; j<MAX_COLS; j++){
            if (arr[i][j] != arr2[i][j])
            {
                k = 0;
                break;
            }
            
        }
    }
    if(k == 1){
         printf("\nThe given matrix is Symmetric matrix: \n");
         for(i=0; i<MAX_ROWS; i++){
             for(j=0; j<MAX_COLS; j++){
                 printf("%d",arr[i][j]);

             }
             printf("\n");

         }
  
        

        }
        else{
             printf("\nThe given matrix isnt Symmetric matrix: \n");

        }

    return 0;
}
