/**
 * @file array_of_pointers.c
 * @author PantheraRed
 * @brief A C program to demonstrate array of pointers.
 * @version 0.1
 * @date 2022-07-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main()
{
    int i, j, *p[5], *q[3][3],
        a[5] = {1, 2, 3, 4, 5},
        b[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (i = 0; i < 5; i++)
    {
        p[i] = &a[i];
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            q[i][j] = &b[i][j];
        }
    }

    printf("a: ");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", *p[i]);
    }

    printf("\nb: ");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", *q[i][j]);
        }
    }

    printf("\n");

    return 0;
}
