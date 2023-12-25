// (d) Temperature of a city in Fahrenheit degrees is input through the
// keyboard. Write a program to convert this temperature into
// Centigrade degrees

#include<stdio.h>

int main(){
    float F;
    printf("Enter temp in F : ");
    scanf("%f", &F);

    printf("Temp in D : %0.2f", ((F - 32) * 5)/9);
    return 0;
}