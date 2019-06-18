#include<stdio.h>
#include <stdlib.h>
int main()
{
    int n, arr[20];
    scanf("%d", &n);
    for(int i = 0; i< n; i++) {
        printf("Enter the %d element = ", i + 1);
        scanf("%d", &arr[i]);
    }
    if(n%2 == 0)
    {
        printf("%d\t%d", arr[(n/2)-1], arr[n/2]);
    }
    else
    {
        printf("%d", arr[(n-1)/2]);
    }
}