#include <stdio.h>

int sum(int n1 , int n2); // its prototype

int main(){
    int Sum, x, y;
    scanf("%d",&x);
    scanf("%d",&y);
    Sum = sum(x,y);
    printf("%d", Sum);
    return 0;
}

int sum(int n1 , int n2){
    int x , y, sum;
    sum = x + y;
    return sum ;
}
