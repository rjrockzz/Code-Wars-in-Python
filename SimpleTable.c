#include <stdio.h>
int main()
{
    int i;
    printf("Enter the table number = ");
    scanf("%d", &i);
    printf("The table is = ");
    for(int x = 1; x<=10; x++)
    {
        printf("%d * %d = %d\n", i, x, i*x);
    }
    return 0;
}