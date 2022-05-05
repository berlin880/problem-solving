#include<stdio.h>
int is_even(int num){
	int loop , k=0;
	for(loop = 0; loop<num; loop++ ){
		if(num%2==0){
			k = 1;
			break;
		}
		
	}
	if(k==1){
		return 1;
	}
	else{
		return 0;
	}
}
int main()
{
	int i;
   int n, a[20];

   printf("Enter the size of the array: ");
   scanf("%d", &n);

   printf("Enter array elements: \n");
   for(i=0; i<n; i++)
   {
      scanf("%d",&a[i]);
   }
   for(i=0; i<n;i++){
   	printf("%3d - %s\n",a[i],(is_even(a[i])?"even":"odd"));
   }
   return 0;
}
