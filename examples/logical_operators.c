#include <stdio.h>

int main()
{
    printf("!0: %d\n", !0); // 1
    printf("0 && 1: %d\n", 0 && 1); // 0
    printf("0 || 1: %d\n", 0 || 1); // 1

    return 0;
}