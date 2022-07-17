/**
 * @file switch_cases.c
 * @author PantheraRed
 * @brief A C program to demonstrate the use of switch cases.
 * @version 0.1
 * @date 2022-07-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &c);

    switch (c)
    {
        case 1:
            printf("%d + %d = %d\n", a, b, a + b);
            break;
        case 2:
            printf("%d - %d = %d\n", a, b, a - b);
            break;
        case 3:
            printf("%d * %d = %d\n", a, b, a * b);
            break;
        case 4:
            printf("%d / %d = %d\n", a, b, a / b);
            break;
        case 5:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
