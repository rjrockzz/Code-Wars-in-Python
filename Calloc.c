#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a, *ptr , sum = 0 ;
    printf("Hello there! Please enter the number of elements = ");
    scanf("%d", &a);
    ptr = (int *)calloc(a ,sizeof(int));
    if (ptr== NULL)
    {
        printf("Sorry, memory cannot be allocated. ");
    }
    for( int i = 0; i < a ; i++)
    {
        printf("Enter the %d element = ", i+1);
        scanf("%d", ptr+i);
        sum+=*ptr+i;
    }
    printf("The sum is = %d", sum);
    free(ptr);
}