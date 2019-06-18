#include<stdio.h>
int main()
{
    int arr[5], arr2[5];
    int x = 5;
    for(int i = 0; i< x; i++)
    {
        printf("Enter the %d element = ", i+1);
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i< x; i++)
    {
        printf("Enter the %d element = ", i+1);
        scanf("%d",&arr2[i]);
    }
    int result[] = { arr[2], arr2[2]  };
    for(int i = 0; i<2; i++)
    {
        printf("%d\t", result[i]);
    }

}