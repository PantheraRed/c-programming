/**
 * @file while_loops.c
 * @author PantheraRed
 * @brief A C program to demonstrate the use of while loops.
 * @version 0.1
 * @date 2022-07-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main()
{
    int i = 1, n;

    printf("Enter limit: ");
    scanf("%d", &n);

    while (i <= n)
    {
        printf("%d\n", i++);
    }

    return 0;
}
