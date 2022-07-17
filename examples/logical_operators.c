/**
 * @file logical_operators.c
 * @author PantheraRed
 * @brief A C program to demonstrate the use of logical operators.
 * @version 0.1
 * @date 2022-07-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main()
{
    printf("!0: %d\n", !0); // 1
    printf("0 && 1: %d\n", 0 && 1); // 0
    printf("0 || 1: %d\n", 0 || 1); // 1

    return 0;
}
