/**
 * @file pointers.c
 * @author PantheraRed
 * @brief A C program to demonstrate the use of pointers.
 * @version 0.1
 * @date 2022-07-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main()
{
    char *str = "Before:";
    int a = 10, *p = &a; // Stores the address of a

    printf("%s\n", str); // Before:
    printf("a = %d\n", a); // 10
    printf("*p = %d\n", *p); // 10
    printf("p = %p\n", p);
    printf("&a = %p\n\n", &a);

    a = 20;

    printf("After:\n");
    printf("a = %d\n", a); // 20
    printf("*p = %d\n", *p); // 20
    printf("p = %p\n", p);
    printf("&a = %p\n\n", &a);

    a += 10;

    printf("After:\n");
    printf("a += 10: %d\n", a); // 30
    printf("*p = %d\n", *p); // 30
    printf("p = %p\n", p);
    printf("&a = %p\n", &a);

    return 0;
}
