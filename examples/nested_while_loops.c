#include <stdio.h>

int main()
{
    int i = 0, j, n, m;

    printf("Enter 1st limit: ");
    scanf("%d", &n);
    printf("Enter 2nd limit: ");
    scanf("%d", &m);

    while (i <= n)
    {
        j = 0;
        while (j <= m)
        {
            printf("\t%d%d", i, j++);
        }
        printf("\n");
        i++;
    }

    return 0;
}
