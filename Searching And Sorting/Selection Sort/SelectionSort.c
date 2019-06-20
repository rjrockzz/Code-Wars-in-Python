#include<stdio.h>
int swapper( int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int selectionSort(int arr[], int x)
{
    int min_index;
    for(int i = 0; i < x-1 ; i++)
    {
        min_index = i;
        for(int j = i+1; j < x ; j++)
        {
            if(arr[j] < arr[min_index]) {
                min_index = j;
            }swapper(&arr[min_index], &arr[i]);
        }
    }

}
void printer(int arr[], int size)
{
    for(int i = 0; i<size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main()
{
    int arr[] = {11,23,11,32,44,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, size);
    printf("The sorted array is = ");
    printer(arr, size);
    return 0;
}