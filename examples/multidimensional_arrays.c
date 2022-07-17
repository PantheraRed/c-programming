/**
 * @file multidimensional_arrays.c
 * @author PantheraRed
 * @brief A C program to demonstrate the use of multidimensional arrays.
 * @version 0.1
 * @date 2022-07-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main()
{
    char ch[2][3] = {
        {'a', 'b', 'c'},
        {'d', 'e', 'f'}
    };

    printf("ch[0][0]: %c\n", ch[0][0]); // a
    printf("ch[0][1]: %c\n", ch[0][1]); // b
    printf("ch[0][2]: %c\n", ch[0][2]); // c
    printf("ch[1][0]: %c\n", ch[1][0]); // d
    printf("ch[1][1]: %c\n", ch[1][1]); // e
    printf("ch[1][2]: %c\n", ch[1][2]); // f

    return 0;
}
