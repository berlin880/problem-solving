#include<stdio.h>
int main(){
	int arr[100], x , n ,y ,temp;
	scanf("%d",&n);
	for(x=0;x<n;x++){
		scanf("%d",&arr[x]);
	}
	for(x=0;x<n-1;x++){
		for(y=0;y<n-x-1;y++){
			if(arr[y]>arr[y+1]){
				temp = arr[y];
				arr[y]=arr[y+1];
				arr[y+1]=temp;
			}
		}
	}
	for(x=0;x<n;x++){
		printf("%d ",arr[x]);
	}
}
