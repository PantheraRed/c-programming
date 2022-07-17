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
