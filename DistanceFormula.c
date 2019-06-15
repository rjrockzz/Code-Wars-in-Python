#include<stdio.h>
#include <math.h>
int main()
{
    float x1, x2, y1, y2, x, y,distance;
    printf("Enter the x1 = ");
    scanf("%f", &x1);
    printf("\n");
    printf("Enter the x2 = ");
    scanf("%f", &x2);
    printf("\n");
    printf("Enter the y1 = ");
    scanf("%f", &y1);
    printf("\n");
    printf("Enter the y2 = ");
    scanf("%f", &y2);
    printf("\n");
    x = pow((x2-x1), 2);
    y = pow((y2-y1), 2);
    distance = sqrt(x+y);
    printf("The distance is = %2.2f" , distance);
}