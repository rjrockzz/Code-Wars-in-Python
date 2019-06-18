#include <stdio.h>
#include <stdlib.h>
void last( int a, int b )
{
    int temp;
    temp = a%10;
    a = temp;
    temp = b%10;
    b = temp;
    if(a==b)
    {
        printf("both are equal");
    }
    else
    {
        printf("Not equal");
    }
}
int main() {
    int n1, n2;
    printf("enter the first number = ");
    scanf("%d",&n1);
    printf("Enter the second number = ");
    scanf("%d", &n2);
    last(n1,n2);
}


