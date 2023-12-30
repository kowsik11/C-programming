#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int greatest = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);
    printf("The greatest number is: %d\n", greatest);

    return 0;
}

/*  
if (num1 > num2) {
        if (num1 > num3) {
            greatest = num1;
        } else {
            greatest = num3;
        }
    } else {
        if (num2 > num3) {
            greatest = num2;
        } else {
            greatest = num3;
        }
    }
}
*/