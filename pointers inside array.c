#include <stdio.h>
#define s 1000
int main(){
    int arr[s];
    int i, n;
    int *ptr = arr;
    printf("enter the size of array : %d\n", s);
    for(i=0; i<n; i++){
        scanf("%d", ptr);
        ptr++;

    }
    ptr = arr;
    printf(" array element ");
    for(i=0; i<n; i++){
        printf("%d", *ptr);
        ptr++;
    }
return 0;

}