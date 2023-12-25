// (c) Any year is input through the keyboard. Write a program to
// determine whether the year is a leap year or not.

#include<stdio.h>

int main(){
    int year;
    printf("Enter a year : ");
    scanf("%d", &year);

    if(year%4 == 0)
        printf("leap year");
    else
        printf("Non-leap year");
}