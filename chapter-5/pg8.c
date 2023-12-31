// #include <stdio.h>

// int main() {
//     int decimalNumber;
//     printf("Enter an integer: ");
//     scanf("%d", &decimalNumber);
//     printf("Octal equivalent: %o\n", decimalNumber);  //octal equivalent to decimal number = use [ %o ]
//     return 0;
// }


#include <stdio.h>

int main() {
    int decimalNumber, originalNumber, remainder;
    int octalNumber = 0, multiplier = 1;

    // Input
    printf("Enter an integer: ");
    scanf("%d", &decimalNumber);

    originalNumber = decimalNumber;

    // Calculate octal equivalent
    while (decimalNumber != 0) {
        remainder = decimalNumber % 8;
        octalNumber += remainder * multiplier;
        decimalNumber /= 8;
        multiplier *= 10;
    }

    // Output
    printf("Octal equivalent of %d is: %d\n", originalNumber, octalNumber);

    return 0;
}
