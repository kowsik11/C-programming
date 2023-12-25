// (b) The distance between two cities (in km.) is input through the
// keyboard. Write a program to convert and print this distance in
// meters, feet, inches and centimeters.

#include<stdio.h>

int main(){
    float km, m, f, in, cent;
    printf("Enter distance in km : ");
    scanf("%f", &km);
    m = 1000 * km;
    cent = 100 * m;
    f = 3.28084 * m;
    in = 0.393701 * cent;

    printf("Distance in meters : %f m", m);
    printf("\nDistance in centimeters : %f cm", cent);
    printf("\nDistance in inches : %f inches", in);
    printf("\nDistance in feet : %f feet", f);

    return 0;
}