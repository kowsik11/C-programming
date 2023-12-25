#include <stdio.h>

int main() {
    int C, D;
    printf("Enter the value for C and D : ");
    scanf("%d", &C);
    scanf("%d", &D);

    C = C + D;
    D = C - D;
    C = C - D;

    printf("After swapping, the value of C is: %d\n", C);
    printf("After swapping, the value of D is: %d\n", D);
    return 0;
}
