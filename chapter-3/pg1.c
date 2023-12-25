// (a) If cost price and selling price of an item are input through the
// keyboard, write a program to determine whether the seller has
// made profit or incurred loss. Also determine how much profit he
// made or loss he incurred.

#include<stdio.h>
#include<math.h>

int main(){
    float cp, sp;
    printf("Enter cost price : ");
    scanf("%f", &cp);
    printf("Enter cost price : ");
    scanf("%f", &sp);

    float diff = sp - cp;
    if(diff < 0)
        printf("Loss of Rs.%0.2f", abs(diff));
    else printf("Profit of Rs.%0.2f", diff);
    return 0;
}
