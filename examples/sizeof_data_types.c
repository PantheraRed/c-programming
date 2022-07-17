#include <stdio.h>

int main()
{
    printf("sizeof(char): %lu\n", sizeof(char)); // 1
    printf("sizeof(signed char): %lu\n", sizeof(signed char)); // 1
    printf("sizeof(unsigned char): %lu\n", sizeof(unsigned char)); // 1
    printf("sizeof(short): %lu\n", sizeof(short)); // 2
    printf("sizeof(short int): %lu\n", sizeof(short int)); // 2
    printf("sizeof(signed short): %lu\n", sizeof(signed short)); // 2
    printf("sizeof(signed short int): %lu\n", sizeof(signed short int)); // 2
    printf("sizeof(unsigned short): %lu\n", sizeof(unsigned short)); // 2
    printf("sizeof(unsigned short int): %lu\n", sizeof(unsigned short int)); // 2
    printf("sizeof(int): %lu\n", sizeof(int)); // 4
    printf("sizeof(signed): %lu\n", sizeof(signed)); // 4
    printf("sizeof(signed int): %lu\n", sizeof(signed int)); // 4
    printf("sizeof(unsigned): %lu\n", sizeof(unsigned)); // 4
    printf("sizeof(unsigned int): %lu\n", sizeof(unsigned int)); // 4
    printf("sizeof(long): %lu\n", sizeof(long));
    printf("sizeof(long int): %lu\n", sizeof(long int));
    printf("sizeof(signed long): %lu\n", sizeof(signed long));
    printf("sizeof(signed long int): %lu\n", sizeof(signed long int));
    printf("sizeof(unsigned long): %lu\n", sizeof(unsigned long));
    printf("sizeof(unsigned long int): %lu\n", sizeof(unsigned long int));
    printf("sizeof(long long): %lu\n", sizeof(long long)); // 8
    printf("sizeof(long long int): %lu\n", sizeof(long long int)); // 8
    printf("sizeof(signed long long): %lu\n", sizeof(signed long long)); // 8
    printf("sizeof(signed long long int): %lu\n", sizeof(signed long long int)); // 8
    printf("sizeof(unsigned long long): %lu\n", sizeof(unsigned long long)); // 8
    printf("sizeof(unsigned long long int): %lu\n", sizeof(unsigned long long int)); // 8
    printf("sizeof(float): %lu\n", sizeof(float)); // 4
    printf("sizeof(double): %lu\n", sizeof(double)); // 8
    printf("sizeof(long double): %lu\n", sizeof(long double));
    printf("sizeof(void *): %lu\n", sizeof(void *));

    return 0;
}
