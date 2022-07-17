#include <stdio.h>

// This is how you declare and define a function
void print_message()
{
    printf("Addition of two numbers:\n");
}

// You can also declare a function first and then define it after the main function
void sum();

int main()
{
    print_message(); // This is how you call a function
    sum();

    return 0;
}

// This is how you define a function after declaration
void sum()
{
    int a, b;

    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);

    printf("%d + %d = %d\n", a, b, a + b);
}
