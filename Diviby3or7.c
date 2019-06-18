#include <stdio.h>
int multiple(int a)
{
    if (a%3==0 || a%7 ==0)
    {
        printf("The number is divisible by either 3 or 7");
    }
    else
        printf("Not divisible");
}
int main() {
    int n1;
    printf("Enter the number 1 = ");
    scanf("%d", &n1);
    multiple(n1);
}
