#include <stdio.h>

int main() {
    double length, breadth, area, perimeter;

    printf("Enter the length and breadth of the rectangle : ");
    scanf("%lf %lf", &length, &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    if (area > perimeter) {
        printf("The area of the rectangle is greater than its perimeter.\n");
    } else {
        printf("The area of the rectangle is not greater than its perimeter.\n");
    }

    return 0;
}
