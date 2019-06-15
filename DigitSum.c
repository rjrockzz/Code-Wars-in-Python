#include<stdio.h>
int main()
{
   int i, sum = 0, x;
   printf("Enter a number = ");
   scanf("%d", &i);
    do
    {
        x = i%10;
        i = i/10;
        sum += x;
    }while(i>0);
    printf("\nThe sum of digits is = %d" , sum);
}