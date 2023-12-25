// If the marks obtained by a student in five different subjects are
// input through the keyboard, write a program to find out the
// aggregate marks and percentage marks obtained by the student.
// Assume that the maximum marks that can be obtained by a student
// in each subject is 100.

#include<stdio.h>

int main(){
    float arr[5];
    float sum = 0;
    for(int i=0; i<5; i++){
        printf("\nEnter marks in subject %d : ", i+1);
        scanf("%f", &arr[i]);
        sum += arr[i];
    }
    float percentage = sum/5;
    printf("Total marks : %0.2f", sum);
    printf("\npercentage : %0.2f %", percentage);

    return 0;

}