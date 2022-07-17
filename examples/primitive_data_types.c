/**
 * @file primitive_data_types.c
 * @author PantheraRed
 * @brief A C program to demonstrate primitive data types.
 * @version 0.1
 * @date 2022-07-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main()
{
    int num = 1;
    char ch = 'a';
    float fl = 1.23;
    double dbl = 1.23;

    printf("num = %d\n", num); // 1
    printf("ch = %c\n", ch); // a
    printf("fl = %.2f\n", fl); // 1.23
    printf("dbl = %.2f\n", dbl); // 1.23

    return 0;
}
