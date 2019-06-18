#include<stdio.h>
#include<stdlib.h>
int tester(int num[], int arr_size)
{
    for(int i =0; i < arr_size-1; i++)
    {
        if(num[i]==5 && num[i+1]==5)
            return 1;
        else if(num[i]==5 && num[i+1]==6)
            return 2;
    }return 0;
}
int main(void)
{
    int arr_size;
    int arr1[] = {1,3,4,5,6,7};
    arr_size = sizeof(arr1)/sizeof(arr1[0]);
    printf("%d",tester(arr1, arr_size));
    int arr2[] = {1,3,4,5,6,7};
    arr_size = sizeof(arr2)/sizeof(arr2[0]);
    printf("\n%d",tester(arr2, arr_size));
    int arr3[] = {1,3,4,5,5,7};
    arr_size = sizeof(arr3)/sizeof(arr3[0]);
    printf("\n%d",tester(arr3, arr_size));
    int arr4[] = {1,3,4,6,7};
    arr_size = sizeof(arr4)/sizeof(arr4[0]);
    printf("\n%d",tester(arr4, arr_size));
}