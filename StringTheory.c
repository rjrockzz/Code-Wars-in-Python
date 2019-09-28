#include <stdio.h>
#include <string.h>
int main()
{
    // The difference between a character array and a string is the string is terminated with a special character ‘\0’.
    char *str = "x";    //String is NullTerminated
    char c[] = "Hello Man!";
    char ary[77];       //Array isn't null terminated ,therefore undefined results
    ary[77] = "YoYo!                            ";
    printf("%d %d %d", strlen(str), strlen(c), strlen(ary));
    return 0;
}