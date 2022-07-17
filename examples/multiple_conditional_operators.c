/**
 * @file multiple_conditional_operators.c
 * @author PantheraRed
 * @brief A C program to demonstrate the use of multiple conditional operators (ternary operators).
 * @version 0.1
 * @date 2022-07-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    printf("Enter 3rd number: ");
    scanf("%d", &c);
    printf("%d is the largest number\n", (a > b) ? (a > c ? a : c) : (b > c ? b : c));

    return 0;
}
