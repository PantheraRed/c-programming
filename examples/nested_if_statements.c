#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    printf("Enter 3rd number: ");
    scanf("%d", &c);

    // If a is greater than b, then check if a is also greater than c
    if (a > b)
    {
        if (a > c)
        {
            printf("%d is the largest number\n", a);
        }
        else
        {
            printf("%d is the largest number\n", c);
        }
    }
    // Else check if b is greater than c
    else
    {
        if (b > c)
        {
            printf("%d is the largest number\n", b);
        }
        else
        {
            printf("%d is the largest number\n", c);
        }
    }

    return 0;
}
