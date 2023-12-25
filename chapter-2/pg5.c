#include <stdio.h>
#include <math.h>

#define EARTH_RADIUS 3963.0 

double degreesToRadians(double degrees) {
    return degrees * M_PI / 180.0;
}

double calculateDistance(double lat1, double lon1, double lat2, double lon2) {
    lat1 = degreesToRadians(lat1);
    lon1 = degreesToRadians(lon1);
    lat2 = degreesToRadians(lat2);
    lon2 = degreesToRadians(lon2);

    double d = acos(sin(lat1) * sin(lat2) + cos(lat1) * cos(lat2) * cos(lon2 - lon1));
    return EARTH_RADIUS * d;
}

int main() {
    double lat1, lon1, lat2, lon2, distance;
    printf("Enter the latitude of place 1 in degrees: ");
    scanf("%lf", &lat1);
    printf("Enter the longitude of place 1 in degrees: ");
    scanf("%lf", &lon1);
    printf("Enter the latitude of place 2 in degrees: ");
    scanf("%lf", &lat2);
    printf("Enter the longitude of place 2 in degrees: ");
    scanf("%lf", &lon2);

    distance = calculateDistance(lat1, lon1, lat2, lon2);

    printf("Distance between the two places: %.2lf miles\n", distance);

    return 0;
}
