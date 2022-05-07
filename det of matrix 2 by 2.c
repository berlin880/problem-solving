#include <stdio.h>
#define s 2

int main(){
    int arr[s][s];
    int i,j;
    int det ;
    printf("enter elements of matrix :  \n");
    for(i=0;i<s;i++){
        for(j=0;j<s;j++){
            scanf("%d", &arr[i][j]);
        }
    }
    det = (arr[0][0] * arr[1][1]) - (arr[0][1] * arr[1][0]);
    printf("det of matrix : %d\n", det);
    return 0;
}
