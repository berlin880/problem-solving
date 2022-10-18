#include<stdio.h>
int x, y;
void Test(int x, int y);
int Test1(int a, int b);
void main()
{
int a, b, z;
x=a=10; y=b=20;
Test(a, b);
printf(“%d %d”, x, y);
printf(“%d %d”, a, b);
z = Test1(x, y);
printf(“%d %d”,x, y);
printf(“%d %d”,a, b);
}
void Test(int x, int y)
{
int z;
z=x++ - y--;
x+=z;
y-=z;

printf(“%d %d”, x, y);
}
int Test1(int a, int b)
{
x=a++;
y=b++;
printf(“%d %d”, x, y);
printf(“%d %d”, a, b);
return(a+b);
}
