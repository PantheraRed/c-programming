#include <stdio.h>

int main()
{
    signed char signed_char_min = -128;
    signed char signed_char_max = 127;
    unsigned char unsigned_char_min = 0;
    unsigned char unsigned_char_max = 255;
    short int short_int_min = -32768;
    short int short_int_max = 32767;
    unsigned int unsigned_int_min = 0;
    unsigned int unsigned_int_max = 65535;
    long int long_int_min = -2147483648;
    long int long_int_max = 2147483647;
    unsigned long int unsigned_long_int_min = 0;
    unsigned long int unsigned_long_int_max = 4294967295;
    long long int long_long_int_max = 9223372036854775807;
    long long int long_long_int_min = -long_long_int_max - 1;
    unsigned long long int unsigned_long_long_int_min = 0;
    unsigned long long int unsigned_long_long_int_max = 2ULL * long_long_int_max + 1;
    long double long_double_min = 3.36210314311209350626e-4932L;
    long double long_double_max = 1.18973149535723176502e+4932L;

    printf("signed_char_min = %d\n", signed_char_min); // -128
    printf("signed_char_max = %d\n", signed_char_max); // 127
    printf("unsigned_char_min = %d\n", unsigned_char_min); // 0
    printf("unsigned_char_max = %d\n", unsigned_char_max); // 255
    printf("short_int_min = %d\n", short_int_min); // -32768
    printf("short_int_max = %d\n", short_int_max); // 32767
    printf("unsigned_int_min = %d\n", unsigned_int_min); // 0
    printf("unsigned_int_max = %d\n", unsigned_int_max); // 65535
    printf("long_int_min = %ld\n", long_int_min); // -2147483648
    printf("long_int_max = %ld\n", long_int_max); // 2147483647
    printf("unsigned_long_int_min = %lu\n", unsigned_long_int_min); // 0
    printf("unsigned_long_int_max = %lu\n", unsigned_long_int_max); // 4294967295
    printf("long_long_int_min = %lld\n", long_long_int_min); // -9223372036854775808
    printf("long_long_int_max = %lld\n", long_long_int_max); // 9223372036854775807
    printf("unsigned_long_long_int_min = %llu\n", unsigned_long_long_int_min); // 0
    printf("unsigned_long_long_int_max = %llu\n", unsigned_long_long_int_max); // 18446744073709551615
    printf("long_double_min = %Lf\n", long_double_min);
    printf("long_double_max = %Lf\n", long_double_max);

    return 0;
}
