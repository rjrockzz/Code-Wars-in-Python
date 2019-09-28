#include <stdio.h>
void main()
{
    int x = 1, y = 0, z = 5;
    int a = x && y || z++;      //z++ will be evaluated
    int b = x && y && z++;      //z++ will not be evaluated as LHS is by default 0 for logical AND
    printf("%d", z);
}