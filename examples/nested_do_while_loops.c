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
