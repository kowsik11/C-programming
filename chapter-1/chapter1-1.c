// (a) Ramesh’s basic salary is input through the keyboard. His dearness
// allowance is 40% of basic salary, and house rent allowance is 20% of
// basic salary. Write a program to calculate his gross salary.


#include<stdio.h>
int main(){
    float basicSalary;
    printf("Enter basic salary : ");
    scanf("%f", &basicSalary);

    float allowance = basicSalary * 0.4;
    float rent = basicSalary * 0.2;

    printf("Gross Salary : %f", basicSalary + allowance + rent);
    return 0;
}