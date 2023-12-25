#include <stdio.h>
#include <math.h>

int main(){
    int x, y;

    printf("Enter the  Cartesian co-ordinates (x, y) : ");
    scanf("%d",&x);
    scanf("%d",&y);

    float r = sqrt(x*x + y*y);
    float c = atan2(y, x);

    printf("The  polar co-ordinates (r, c) : %f, %f\n", r, c);
    
}