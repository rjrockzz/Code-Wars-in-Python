#include<stdio.h>
int insertionSort(int arr[], int size)
{int i, key, j;
    for (i = 1; i < size; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
void printer(int arr[], int size)
{
    for(int i = 0; i< size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main()
{
    int arr[] = {22,3,12,4};
    int size = sizeof(arr)/ sizeof(arr[0]);
    insertionSort(arr, size);
    printf("The array is = ");
    printer ( arr, size);
    return 0;
}