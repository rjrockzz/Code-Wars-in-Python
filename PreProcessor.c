#include <stdio.h>
#define MIN(a,b) ((a)<(b)?(a):(b))
void main() {
    int x, y;
    printf("Enter the first number = ");
    scanf("%d", &x);
    printf("Enter the second number = ");
    scanf("%d", &y);
    printf("Minimum between 10 and 20 is: %d\n", MIN(x,y));
}  