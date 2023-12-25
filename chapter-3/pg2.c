// (b) Any integer is input through the keyboard. Write a program to find
// out whether it is an odd number or even number.

#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    if(n%2 != 0) 
        printf("Odd Number");
    else 
        printf("Even Number");
    return 0;
}