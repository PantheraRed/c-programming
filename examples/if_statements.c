/**
 * @file if_statements.c
 * @author PantheraRed
 * @brief A C program to demonstrate the use of if statements.
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

    if (a > b)
    {
        printf("%d is the largest number\n", a);
    }
    else if (a < b)
    {
        printf("%d is the largest number\n", b);
    }
    else
    {
        printf("Both the numbers are equal\n");
    }

    return 0;
}
