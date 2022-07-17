#include <stdio.h>

int main()
{
    int i = 0;

    printf("i = %d\n", i); // 0
    printf("i++: %d\n", i++); // 0
    printf("i = %d\n", i); // 1
    printf("++i: %d\n", ++i); // 2
    printf("i = %d\n", i); // 2
    printf("i--: %d\n", i--); // 2
    printf("i = %d\n", i); // 1
    printf("--i: %d\n", --i); // 0
    printf("i = %d\n", i); // 0

    return 0;
}
