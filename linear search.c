#include<stdio.h>
int main(){
	int i , j ,found , size , a[10],target;
	printf("enter the size of array here: ");
	scanf("%d",&size);
	printf("enter the element of array: ");
	for(i=0;i<size;i++){
		
		scanf("%d",&a[i]);
	}
	printf("enter the target here: ");
	scanf("%d",&target);
	found =0;
	for(j =0;j<size;j++){
		if(a[j] == target){
			printf("found it at %d \n", i);
			found = 1;
			break;
		}
	}
	if (found == 0 ){
		printf("looked all over , not here \n");
	}
	return 0;
}
