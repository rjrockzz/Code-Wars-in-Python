#include<stdio.h>
int main()
{
    printf("* %d *\n",sizeof('\0'));
    printf("* %d *\n",sizeof(0));
    printf("* %d *\n",sizeof(NULL));
    /*null character (NUL)" is easiest to rule out. '\0' is a character literal. \
     * In C, it is implemented as int, so, it's the same as 0, which is of INT_TYPE_SIZE.
     * In C++, character literal is implemented as char, which is 1 byte. This is normally different
     * from NULL or 0. Next, NULL is a pointer value that specifies that a variable does not
     * point to any address space. Set aside the fact that it is usually implemented as zeros,
     * it must be able to express the full address space of the architecture. Thus, on a 32-bit
     * architecture NULL (likely) is 4-byte and on 64-bit architecture 8-byte.
     * This is up to the implementation of C.
    * Finally, the literal 0 is of type int, which is of size INT_TYPE_SIZE. The default value of
     * INT_TYPE_SIZE could be different depending on architecture.*/
}