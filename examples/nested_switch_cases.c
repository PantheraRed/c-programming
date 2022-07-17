#include <stdio.h>

int main()
{
    int a, b, c, s1, s2;

    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    printf("Enter 3rd number: ");
    scanf("%d", &c);

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    printf("Enter choice for a & b: ");
    scanf("%d", &s1);
    printf("Enter choice for b & c: ");
    scanf("%d", &s2);
    
    switch (s1)
    {
        case 1:
            switch (s2)
            {
                case 1:
                    printf("%d + %d + %d = %d\n", a, b, c, a + b + c);
                    break;
                case 2:
                    printf("%d + %d - %d = %d\n", a, b, c, a + b - c);
                    break;
                case 3:
                    printf("%d + %d * %d = %d\n", a, b, c, a + b * c);
                    break;
                case 4:
                    printf("%d + %d / %d = %d\n", a, b, c, a + b / c);
                    break;
                default:
                    printf("Invalid choice\n");
            }
            break;
        case 2:
            switch (s2)
            {
                case 1:
                    printf("%d - %d + %d = %d\n", a, b, c, a - b + c);
                    break;
                case 2:
                    printf("%d - %d - %d = %d\n", a, b, c, a - b - c);
                    break;
                case 3:
                    printf("%d - %d * %d = %d\n", a, b, c, a - b * c);
                    break;
                case 4:
                    printf("%d - %d / %d = %d\n", a, b, c, a - b / c);
                    break;
                default:
                    printf("Invalid choice\n");
            }
            break;
        case 3:
            switch (s2)
            {
                case 1:
                    printf("%d * %d + %d = %d\n", a, b, c, a * b + c);
                    break;
                case 2:
                    printf("%d * %d - %d = %d\n", a, b, c, a * b - c);
                    break;
                case 3:
                    printf("%d * %d * %d = %d\n", a, b, c, a * b * c);
                    break;
                case 4:
                    printf("%d * %d / %d = %d\n", a, b, c, a * b / c);
                    break;
                default:
                    printf("Invalid choice\n");
            }
            break;
        case 4:
            switch (s2)
            {
                case 1:
                    printf("%d / %d + %d = %d\n", a, b, c, a / b + c);
                    break;
                case 2:
                    printf("%d / %d - %d = %d\n", a, b, c, a / b - c);
                    break;
                case 3:
                    printf("%d / %d * %d = %d\n", a, b, c, a / b * c);
                    break;
                case 4:
                    printf("%d / %d / %d = %d\n", a, b, c, a / b / c);
                    break;
                default:
                    printf("Invalid choice\n");
            }
            break;
        case 5:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
