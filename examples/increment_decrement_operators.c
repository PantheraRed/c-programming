/**
 * @file increment_decrement_operators.c
 * @author PantheraRed
 * @brief A C program to demonstrate the use of increment and decrement operators.
 * @version 0.1
 * @date 2022-07-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */
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
