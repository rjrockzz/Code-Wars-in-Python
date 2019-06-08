#include<stdio.h>
#include<string.h>
int main()
{
    char a[10] = "Arjun";
    int *p, count = 0;
    for(int x=0; x<10;x++)
    {
        if(a[x]=='A' || a[x]=='e' ||a[x]=='i' || a[x]=='o' ||a[x]=='u')
            count++;
    }
    printf("The number of vowels is = %d", count);
    return 0;
}
