#include <stdio.h>
#include <math.h>

int main() {
    double angle_degrees, sum_of_squares;

    printf("Enter the angle in degrees: ");
    scanf("%lf", &angle_degrees);

    double angle_radians = angle_degrees * (M_PI / 180.0); //M_PI = 3.14159

    sum_of_squares = pow(sin(angle_radians), 2) + pow(cos(angle_radians), 2);

    if (sum_of_squares == 1.0) {
        printf("The sum of squares of sine and cosine is equal to 1.\n");
    } else {
        printf("The sum of squares of sine and cosine is NOT equal to 1.\n");
    }

    return 0;
}
