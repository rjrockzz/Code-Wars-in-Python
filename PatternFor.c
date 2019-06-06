#include<stdio.h>
int fibo(int z) {
    if (z == 1)
        return 1;
    else if (z == 0)
        return 0;
    else
        return fibo(z-1)+fibo(z-2);
}
int main() {
    int a=1,b=1, n, k=1,temp;
    printf("Enter the value of n = ");
    scanf("%d", &n);
    printf("\nThe sum of the series is = %d" , fibo(n));
    printf("\n The series is = ");
    printf("%d\t",a);
    printf("%d\t",b);
    for(int i = 0; i <n-2 ;i ++)
    {
        k = a + b;
        printf("%d\t", k);
        a = b;
        b = k;
    }
    return 0;
}