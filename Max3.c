#include<stdio.h>
int greatest(int a ,int b, int c)
{
    if(a > b)
    {
        if(c > a)
        {
            printf("Third number is the greatest!");
            
        }
        else
            printf("First is the greatest!");
    }
    if(b > c)
    {
        if(a > b)
        {
            printf("I is the greatest!");
        }
        else
            printf("II is the greatest!");
    }
    if(c > a)
    {
        if(b > c)
        {
            printf("B is greatest");
        }
        else
            printf("C is greatest");
    }
}
int main()
{
    int x ,y, z;
    printf("Welcome to the greatest of the three number problem!");
    printf("Enter the first number = ");
    scanf("%d",&x);
    printf("Enter the second number = ");
    scanf("%d",&y);
    printf("Enter the third number = ");
    scanf("%d",&z);
    greatest(x, y, z);
    return 0;
}