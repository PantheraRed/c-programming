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
