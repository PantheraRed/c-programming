/**
 * @file for_loops.c
 * @author PantheraRed
 * @brief A C program to demonstrate the use of for loops.
 * @version 0.1
 * @date 2022-07-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main()
{
    int i, n;

    printf("Enter limit: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}
