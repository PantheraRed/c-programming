/**
 * @file nested_do_while_loops.c
 * @author PantheraRed
 * @brief A C program to demonstrate the use of nested do...while loops.
 * @version 0.1
 * @date 2022-07-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main()
{
    int i = 0, j, n, m;

    printf("Enter 1st limit: ");
    scanf("%d", &n);
    printf("Enter 2nd limit: ");
    scanf("%d", &m);

    do
    {
        j = 0;
        do
        {
            printf("\t%d%d", i, j++);
        }
        while (j <= m);
        printf("\n");
        i++;
    }
    while (i <= n);

    return 0;
}
