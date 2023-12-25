#include <stdio.h>

int main() {
    int original, reversed = 0, remainder, temp;
    printf("Enter a five-digit number: ");
    scanf("%d", &original);

    temp = original;

    while (temp != 0) {
        remainder = temp % 10;
        reversed = reversed * 10 + remainder;
        temp /= 10;
    }
    printf("Reversed : %d\n", reversed);

    if (original == reversed) {
        printf("The original and reversed numbers are equal.\n");
    } else {
        printf("The original and reversed numbers are not equal.\n");
    }

    return 0;
}
