#include<stdio.h>
int a;
int b;
int adder(int x, int y)
{
    return x+y;
}
int main()
{
    printf("Enter A = ");
    scanf("%d", &a);
    printf("A is = %d" , a);
    printf("\nEnter B = ");
    scanf("%d", &b);
    printf("B is = %d" , b);
    printf("\nThe Sum is = %d" , adder(a,b));
}