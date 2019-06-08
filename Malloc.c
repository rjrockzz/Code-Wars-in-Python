#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a, *ptr, sum ;
    printf("Hello , Enter the number of elements");
    scanf("%d",&a);
    ptr = (int *)malloc(a*sizeof(int));
    if(ptr == NULL)
    {
        printf("Sorry cannot be allocated");
    }
    for( int i = 0; i < a; i ++)
    {
        printf("Enter the %d element = ", i+1);
        scanf("%d", ptr+i);
        sum+=*ptr+1;
    }
    printf("\nThe sum is = %d", sum);
    printf("\nThenks!");
    free(ptr);
    return 0;
}