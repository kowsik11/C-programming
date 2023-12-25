#include <stdio.h>

int main() {
    int ramAge, shyamAge, ajayAge;
    printf("Enter Ram, shyam, Ajay ages : ");
    scanf("%d", &ramAge);
    scanf("%d", &shyamAge);
    scanf("%d", &ajayAge);

    if (ramAge < shyamAge && ramAge < ajayAge) {
        printf("Ram is the youngest with age %d.\n", ramAge);
    } else if (shyamAge < ramAge && shyamAge < ajayAge) {
        printf("Shyam is the youngest with age %d.\n", shyamAge);
    } else {
        printf("Ajay is the youngest with age %d.\n", ajayAge);
    }

    return 0;
}
