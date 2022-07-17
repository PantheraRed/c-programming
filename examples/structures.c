#include <stdio.h>

// Structure declaration
struct Coordinates
{
    float x, y, z;
};

struct nums
{
    int a, b, c;
};

struct nums2
{
    int a, b, c;
};

// You can also declare structure and variable at the same time
struct Employee
{
    char *name;
    int age;
    char *address;
    char *post;
    float salary;
} emp1;

struct Employee emp2 = {
    "Mark Evans",
    24,
    "25th Street, New York, NY 10001",
    "Software Engineer",
    100000.00
};

int main()
{
    // Structure variable declaration
    struct Coordinates coords;
    struct nums2 num2;

    // You can also assign the values like this
    struct nums num = {1, 2, 3};
    // or like this
    num2 = (struct nums2){1, 2, 3};

    coords.x = 232.770;
    coords.y = 15.000;
    coords.z = 257.335;

    emp1.name = "John Doe";
    emp1.age = 30;
    emp1.address = "123 Main Street, New York, NY 10001";
    emp1.post = "Software Engineer";
    emp1.salary = 100000.00;

    printf("coords.x = %f\n", coords.x); // 232.770004
    printf("coords.y = %f\n", coords.y); // 15.890000
    printf("coords.z = %f\n\n", coords.z); // 257.334991

    printf("nums.a = %d\n", num.a); // 1
    printf("nums.b = %d\n", num.b); // 2
    printf("nums.c = %d\n\n", num.c); // 3

    printf("nums2.a = %d\n", num2.a); // 1
    printf("nums2.b = %d\n", num2.b); // 2
    printf("nums2.c = %d\n\n", num2.c); // 3

    printf("emp1.name = %s\n", emp1.name); // John Doe
    printf("emp1.age = %d\n", emp1.age); // 30
    printf("emp1.address = %s\n", emp1.address); // 123 Main Street, New York, NY 10001
    printf("emp1.post = %s\n", emp1.post); // Software Engineer
    printf("emp1.salary = %.2f\n\n", emp1.salary); // 30000.00

    printf("emp2.name = %s\n", emp2.name); // Mark Evans
    printf("emp2.age = %d\n", emp2.age); // 24
    printf("emp2.address = %s\n", emp2.address); // 25th Street, New York, NY 10001
    printf("emp2.post = %s\n", emp2.post); // Software Engineer
    printf("emp2.salary = %.2f\n", emp2.salary); // 100000.00

    return 0;
}
