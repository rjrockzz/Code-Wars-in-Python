#include<stdio.h>
int main()
{
    int num,x,r_num=0;
    printf("Input a number: ");
    scanf("%d",&num);
    printf("\nThe original number = %d",num);
    while(num>=1)
    {
        x=num%10;
        r_num=r_num*10+x;
        num=num/10;
    }
    printf("\nThe reverse of the said number = %d",r_num);
    return 0;
}