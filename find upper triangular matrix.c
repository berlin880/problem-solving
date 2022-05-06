#include <stdio.h>
#define MAX_ROWS 3
#define MAX_COLS 3

int main(){
    int arr[MAX_ROWS][MAX_COLS];
    int i, j,k;
    for(i=0;i<MAX_ROWS;i++){
        for(j=0;j<MAX_COLS;j++){
            scanf("%d", &arr[i][j]);
        }
    }
    k = 1;
    for(i=0;i<MAX_ROWS;i++){
        for(j=0;j<MAX_COLS;j++){
             if(i > j && arr[i][j]!=0){
                 k = 0;

             }

        }
    }
    if(k == 1){
        	printf("\nThe matrix is Upper triangular matrix.\n");
       	 for(i=0;i<MAX_ROWS;i++){
            	for(j=0;j<MAX_COLS;j++){
               		 printf("%d", arr[i][j]);

            }
            printf("\n");

        }

    }
    else{
        printf("\nThe matrix isnt Upper triangular matrix.\n");
    }
    return 0;
    
}
