#include <stdio.h>

int main()
{
    int i, j,
        a[5] = {1, 2, 3, 4, 5},
        b[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}},
        *p = a, (*q)[3] = b;

    printf("a: ");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", *(p + i));
    }

    printf("\nb: ");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", *(*(q + i) + j));
        }
    }

    printf("\n");

    return 0;
}
