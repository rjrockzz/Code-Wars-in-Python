#include<stdio.h>
int main()
{
    int arr[20], sum = 0;
    printf("Enter the first number = ");
    scanf("%d", &arr[0]);
    printf("\nEnter the second number = ");
    scanf("%d", &arr[1]);
    printf("\nEnter the third number = ");
    scanf("%d", &arr[2]);
    printf("\nEnter the fourth number = ");
    scanf("%d", &arr[3]);
    printf("\nEnter the fifth number = ");
    scanf("%d", &arr[4]);
    for(int i =0; i < 4 ; i++)
    {
        if(arr[i]%2 != 0)
            sum += arr[i];
    }
    printf("The sum is = %d", sum);
}