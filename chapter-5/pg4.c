#include <stdio.h>

int main() {
    int i = 0;

    while (i <= 255) {
        printf("ASCII value: %d, Character: %c\n", i, (char)i);
        // printf("ASCII value: %d, Character: %c\n", i, i);
        i++;
    }

    return 0;
}
