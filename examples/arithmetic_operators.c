/**
 * @file arithmetic_operators.c
 * @author PantheraRed
 * @brief A C program to demonstrate the use of arithmetic operators.
 * @version 0.1
 * @date 2022-07-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);

    printf("+a: %d\n", +a);
    printf("-a: %d\n", -a);
    printf("a + b: %d\n", a + b);
    printf("a - b: %d\n", a - b);
    printf("a * b: %d\n", a * b);
    printf("a / b: %d\n", a / b);
    printf("a %% b: %d\n", a % b);
    printf("~a: %d\n", ~a);
    printf("a & b: %d\n", a & b);
    printf("a | b: %d\n", a | b);
    printf("a ^ b: %d\n", a ^ b);
    printf("a << b: %d\n", a << b);
    printf("a >> b: %d\n", a >> b);

    return 0;
}
