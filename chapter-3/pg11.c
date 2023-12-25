#include<stdio.h>
#include<math.h>
int main()
{
    int x1, y1, x2, y2, radius;
    float pc;
    printf("Enter the center point of the circle: ");
    scanf("%d %d", &x1, &y1);
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);
    printf("Enter the point co-ordinates: ");
    scanf("%d %d", &x2, &y2);

    pc = sqrt(pow(x2-x1, 2)+pow(y2-y1,2));

    if(pc>radius)
        printf("The point is outside the circle");
    else if(pc<radius)
        printf("The point is inside the circle");
    else if(pc==radius)
        printf("The point is on the circle");
    return 0;
}