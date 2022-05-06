#include <stdio.h>
#define s 3
int main(){
    int arr[s][s+1];
    int k , j;
    int a, b  , c, d, e, f, g, h, i;
    float det;
    for(k = 0; k < s;k++){
        for(j = 0; j < s;j++){
            scanf("%d",&arr[k][j]);

        }
    }
    a = arr[0][0];
    b = arr[0][1];
    c = arr[0][2];
    d = arr[1][0];
    e = arr[1][1];
    f = arr[1][2];
    g = arr[2][0];
    h = arr[2][1];
    i = arr[2][2];
    det = (a*(e*i - f*h)) - (b*(d*i - f*g)) + (c*(d*h - e*g));
    printf("det of matrix of array = %lf", det);
    return 0;
}
