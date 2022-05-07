#include <stdio.h>
#include <math.h>
double diameter(double radius);
double area(double radius);
double circumference(double radius);
int main (){
    float radius, diameter1, circumference1, area1;
    printf("Enter the radius of the circle");
    scanf("%f", &radius);
    diameter1 = diameter(radius);
    circumference1 = circumference(radius);
    area1 = area(radius);
    printf("Diameter of the circle = %.2f units\n", diameter1);
    printf("Circumference of the circle = %.2f units\n", circumference1);
    printf("Area of the circle = %.2f sq. units", area1);
    return 0;
}
double diameter(double radius){
    return radius * 2;
}
double circumference(double radius){
    return (2* M_PI * radius);
}
double area(double radius){
    return ( M_PI * pow(radius,2));
}
