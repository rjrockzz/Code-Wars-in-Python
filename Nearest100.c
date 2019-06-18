#include <stdio.h>
#include <stdlib.h>
int nearest( int a, int b )
{
    int m = abs(100 - a);
    int n = abs(100 - b);
    if(m>n) {
        printf("Second is near to 100");
    }
    else if(m==n) {

        printf("Both are equal");
    }
    else
    {
        printf("First is near to 100");
    }
}
int main() {
    int n1, n2;
    printf("enter the first number = ");
    scanf("%d",&n1);
    printf("Enter the second number = ");
    scanf("%d", &n2);
    nearest(n1,n2);
}


