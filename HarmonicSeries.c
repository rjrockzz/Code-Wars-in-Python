#include<stdio.h>
int main()
{
    float series = 0;
    for(int i = 1; i <= 50; i++)
    {
        series+= (float)1/i;
    }
    printf("The series sum is = %.2f", series);
    return 0;
}