#include <stdio.h>
#define MAX_SIZE 100

int main(){
    int arr[MAX_SIZE];
    int i,j,temp;
    int n;
    printf("enter the size of the array :");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        printf("enter the elements of the array: ");
        scanf("%d", &arr[i]);

    }
    for (i = 0; i < n; i++)
    {
        for(j = i+1; j <n; j++){

            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i]= arr[j];
                arr[j]= temp;

            }
        }
    }
    printf("\n Elements of  array in ascending order : ");
    for(i = 0; i < n;i++){
        printf("%d \t",arr[i]);
    }
    return 0;
}