#include<stdio.h>
#include<string.h>
int main(){
	char l ;
	char s[10] , k[10];
	gets(s);
	gets(k);
	l = strcmp(s,k);
	if(l<0){
		printf("\n first is less than second \n ");
		
	}
	else if (l==0){
		printf("\n first is equal than second \n ");
	}
	else if (l>0){
		printf("\n first is more than second \n ");	
		
	}
	return 0;
}
