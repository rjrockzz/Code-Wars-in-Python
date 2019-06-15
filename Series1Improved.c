#include<stdio.h>
#include<math.h>
int main()
{
    int x,y = 1;
    float series = 0;
    for(int i = 0; i <4; i++)
    {
       series += (float) (2*i+1)/ pow(2,i) ;
    }
    printf("The series sum is = %.2f", series);
    return 0;
}