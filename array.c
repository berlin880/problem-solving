#include<Stdio.h>
#define s 1000
int main(){
    int arr[s];
    int i , n;
    printf("enter the size of the array");
    scanf("%d",&n);
       printf("enter the elemnt]s of array");
    for(i=0;i<n;i++) {
     
        scanf("%d",&arr[i]);

    }
    for(i=0;i<n;i++){
    	printf("%d",arr[i]);
	}
    return 0;
}
