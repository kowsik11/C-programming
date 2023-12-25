#include <stdio.h>
#include <math.h>

int main() {
    double t, v, wcf;
    printf("Enter the temperature in degrees Fahrenheit: ");
    scanf("%lf, %lf", &t, &v);

    printf("Enter the wind velocity in miles per hour: ");
    wcf = 35.74 + 0.6215 * t + (0.4275 * t - 35.75) * pow(v, 0.16);
    printf("Wind Chill Factor: %.2lf\n", wcf);

    return 0;
}
