#include <stdio.h>

int main() {
    int angle1, angle2, angle3;
    printf("Enter three angles separated by spaces: ");
    scanf("%d %d %d", &angle1, &angle2, &angle3);
    if (angle1 + angle2 + angle3 == 180) {
        printf("The angles form a valid triangle.\n");
    } else {
        printf("The angles do not form a valid triangle.\n");
    }

    return 0;
}
