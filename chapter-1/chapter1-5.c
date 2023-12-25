// (e) The length and breadth of a rectangle and radius of a circle are
// input through the keyboard. Write a program to calculate the area
// and perimeter of the rectangle, and the area and circumference of
// the circle.

#include<stdio.h>
#include<math.h>

int main(){
    float arr[3];
    printf("Enter length, breadth and radius below : \n");
    for(int i=0; i<3; i++){
        scanf("%f", &arr[i]);
    }
    float rect = arr[0]*arr[1];
    float circle = 3.14 * pow(arr[2],2);

    printf("Area of rectangle : %0.2f", rect);
    printf("\nArea of Circle : %0.2f", circle);
    return 0;
}