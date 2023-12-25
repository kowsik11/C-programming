#include <stdio.h>

int main() {
    double x, y;

    printf("Enter the coordinates of the point (x y): ");
    scanf("%lf %lf", &x, &y);

    if (x == 0 && y == 0) {
        printf("The point is on the origin.\n");
    } else if (x == 0) {
        printf("The point is on the Y-axis.\n");
    } else if (y == 0) {
        printf("The point is on the X-axis.\n");
    } else {
        printf("The point is neither on the X-axis nor the Y-axis.\n");
    }

    return 0;
}
