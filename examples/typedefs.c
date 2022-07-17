#include <stdio.h>

typedef unsigned int uint;
typedef unsigned char uchar;
typedef int *intp;

typedef struct Car
{
    char *name;
    int year;
    float price;
} car;

int main()
{
    car car1;
    uint num = 10;
    uchar ch = 'a';
    intp p = &num;

    car1.name = "BMW";
    car1.year = 2018;
    car1.price = 100000.0;

    printf("num = %d\n", num); // 10
    printf("ch = %c\n", ch); // a
    printf("*p = %d\n", *p); // 0
    printf("p = %p\n", p);
    printf("&num = %p\n\n", &num);

    printf("car1.name = %s\n", car1.name); // BMW
    printf("car1.year = %d\n", car1.year); // 2018
    printf("car1.price = %.2f\n", car1.price); // 100000.00

    return 0;
}
