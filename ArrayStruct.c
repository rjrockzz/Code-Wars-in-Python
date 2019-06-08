#include<stdio.h>
#include<string.h>
struct student
{
    int roll;
    char name[10];
};
int main()
{
    struct student s1[10];
    printf("Please Enter the Details \n");
    for(int i = 0; i< 5 ;i++)
    {
        printf("Enter the %d roll number = ", i+1);
        scanf("%d", &s1[i].roll);
        printf("Enter the %d name of student = ", i+1);
        scanf("%s", &s1[i].name);
    }

    for(int i = 0; i< 5 ;i++)
    {
        printf("\nThe %d roll number = ", i+1);
        printf("%d", s1[i].roll);
        printf("\nThe %d name of student = ", i+1);
        printf("%s", s1[i].name);
    }
    return 0;

}