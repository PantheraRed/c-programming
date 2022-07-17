/**
 * @file static.c
 * @author PantheraRed
 * @brief A C program to demonstrate the use of static keyword.
 * @version 0.1
 * @date 2022-07-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int count1()
{
    int c = 0;
    return c++;
}

int count2()
{
    // This is how you declare a static variable
    static int c = 0;
    return c++;
}

// This function is static, so it is not visible outside of this file
static void print_message()
{
    printf("Count:\n");
}

int main()
{
    int i = count1(), j = count2();

    print_message();

    while (j < 10)
    {
        printf("i = %d, j = %d\n", i, j);
        i = count1();
        j = count2();
    }

    return 0;
}
