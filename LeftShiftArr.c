#include<stdio.h>
int main()
{
    int arr[5], n = 5, temp;
    for(int i = 0; i< n; i++) {
        printf("Enter the %d element = ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("The array is = ");
    for(int i = 0; i< n; i++) {
        printf("%d", arr[i]);
        printf("\t");
    }
    temp = arr[0];
    for(int i = 0; i <=n ; i++)
    {
        arr[i] = arr[i+1];
        arr[n] = temp;
    }
    printf("The new array is = ");
    for(int i = 0; i< n; i++) {
        printf("%d", arr[i]);
        printf("\t");
    }

}