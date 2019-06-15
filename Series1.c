#include<stdio.h>
#include<math.h>
int main()
{
    int x,y = 1;
    float series = 0;
    for(int i = 0; i <4; i++)
    {
       x = pow(2,i);
       series += (float) y/x ;
        y+=2;
    }
    printf("The series sum is = %.2f", series);
    return 0;
}