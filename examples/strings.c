/**
 * @file strings.c
 * @author PantheraRed
 * @brief A C program to demonstrate strings.
 * @version 0.1
 * @date 2022-07-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main()
{
    // You can declare string in various different ways
    char str1[] = "String 1",
         str2[9] = "String 2",
         str3[] = {"String 3"},
         str4[9] = {"String 4"},
         str5[] = {'S', 't', 'r', 'i', 'n', 'g', ' ', '5', '\0'},
         str6[9] = {'S', 't', 'r', 'i', 'n', 'g', ' ', '6', '\0'};

    printf("%s\n", str1); // String 1
    printf("%s\n", str2); // String 2
    printf("%s\n", str3); // String 3
    printf("%s\n", str4); // String 4
    printf("%s\n", str5); // String 5
    printf("%s\n", str6); // String 6

    return 0;
}
