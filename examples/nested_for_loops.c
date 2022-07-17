/**
 * @file nested_for_loops.c
 * @author PantheraRed
 * @brief A C program to demonstrate the use of nested for loops.
 * @version 0.1
 * @date 2022-07-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main()
{
    int i, j, n, m;

    printf("Enter 1st limit: ");
    scanf("%d", &n);
    printf("Enter 2nd limit: ");
    scanf("%d", &m);

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= m; j++)
        {
            printf("\t%d%d", i, j);
        }
        printf("\n");
    }

    return 0;
}
