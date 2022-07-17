/**
 * @file do_while_loops.c
 * @author PantheraRed
 * @brief A C program to demonstrate the use of do...while loops.
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

    do
    {
        printf("%d\n", i++);
    }
    while (i <= n);

    return 0;
}
