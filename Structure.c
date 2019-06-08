#include<stdio.h>
#include <string.h>
struct employee
{   int id;
    char name[50];
    float salary;
};
int main( )
{
    struct employee e1, e2;
    e1.id=101;
    strcpy(e1.name, "Arjun Sharma");
    e1.salary=5600000;
    e2.id=102;
    strcpy(e2.name, "James Bond");
    e2.salary=126000;
    printf( "employee 1 id : %d\n", e1.id);
    printf( "employee 1 name : %s\n", e1.name);
    printf( "employee 1 salary : %f\n", e1.salary);
    printf( "employee 2 id : %d\n", e2.id);
    printf( "employee 2 name : %s\n", e2.name);
    printf( "employee 2 salary : %f\n", e2.salary);
    return 0;
}