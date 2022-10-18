#include<stdio.h>
#include<string.h>
int main(){
	int k ,i;
	char str [30], tmp;
	printf("enter string here");
	gets(str);
	k = strlen(str);
	for(i=0;i<k/2;i++){
		tmp = str[i];
		str[i] = str[k-i-1];
		str[k-i-1] = tmp;
	}
	puts(str);
	return 0;
	
}
