#include <stdio.h>
#include <math.h>

int main() {
    double angleInDegrees;
    
    printf("Enter the angle in degrees: ");
    scanf("%lf", &angleInDegrees);

    double angle = angleInDegrees * M_PI / 180.0; //3.14

    double sineValue = sin(angle);
    double cosineValue = cos(angle);
    double tangentValue = tan(angle);
    double cosecantValue = 1 / sineValue;
    double secantValue = 1 / cosineValue;
    double cotangentValue = 1 / tangentValue;

    printf("Trigonometric Ratios for %.2lf degrees:\n", angleInDegrees);
    printf("Sine: %.4lf\n", sineValue);
    printf("Cosine: %.4lf\n", cosineValue);
    printf("Tangent: %.4lf\n", tangentValue);

    if (sineValue != 0.0) {
        printf("Cosecant: %.4lf\n", cosecantValue);
    } else {
        printf("Cosecant is undefined for this angle.\n");
    }

    if (cosineValue != 0.0) {
        printf("Secant: %.4lf\n", secantValue);
    } else {
        printf("Secant is undefined for this angle.\n");
    }

    if (tangentValue != 0.0) {
        printf("Cotangent: %.4lf\n", cotangentValue);
    } else {
        printf("Cotangent is undefined for this angle.\n");
    }

    return 0;
}
