#include <stdio.h>

int main()
{
    int a;

    printf("a = %d: 10\n", a = 10); // 10
    printf("a += 10: %d\n", a += 10); // 20
    printf("a -= 10: %d\n", a -= 10); // 10
    printf("a *= 10: %d\n", a *= 10); // 100
    printf("a /= 10: %d\n", a /= 10); // 10
    printf("a %%= 10: %d\n", a %= 10); // 0
    printf("a &= 10: %d\n", a &= 10); // 0
    printf("a |= 10: %d\n", a |= 10); // 10
    printf("a ^= 10: %d\n", a ^= 10); // 0
    printf("a <<= 10: %d\n", a <<= 10); // 0
    printf("a >>= 10: %d\n", a >>= 10); // 0

    return 0;
}
