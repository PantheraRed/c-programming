/**
 * @file standard_predefined_macros.c
 * @author PantheraRed
 * @brief A C program to print the values of standard predefined macros.
 * @version 0.1
 * @date 2022-07-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main()
{
    printf("__FILE__: %s\n", __FILE__);
    printf("__LINE__: %d\n", __LINE__); // 6
    printf("__DATE__: %s\n", __DATE__);
    printf("__TIME__: %s\n", __TIME__);
    printf("__STDC__: %d\n", __STDC__);
    printf("__STDC_VERSION__: %lu\n", __STDC_VERSION__);
    printf("__STDC_HOSTED__: %d\n", __STDC_HOSTED__);

    return 0;
}
