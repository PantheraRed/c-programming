/**
 * @file pointers_as_parameters.c
 * @author PantheraRed
 * @brief A C program to demonstrate pointers as parameters.
 * @version 0.1
 * @date 2022-07-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

// Pointers as parameters
void sum(int *a, int *b)
{
    printf("%d + %d = %d\n", *a, *b, *a + *b);
}

int main()
{
    int a, b;

    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    sum(&a, &b); // Passing address of a and b

    return 0;
}
