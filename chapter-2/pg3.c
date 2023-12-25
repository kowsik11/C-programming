#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c;
    printf("enter the 3 sides of the triangle : ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    int s = (a+b+c)/2;
    int area =  sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area of the triangle is  : %d", area);
    }