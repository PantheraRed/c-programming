#include <stdio.h>

struct student
{
    char *name;
    int rollno;
    float perc;
};

int main()
{
    struct student stud[3];

    stud[0].name = "John";
    stud[0].rollno = 1;
    stud[0].perc = 90.0;
    stud[1].name = "Jane";
    stud[1].rollno = 2;
    stud[1].perc = 80.0;
    stud[2].name = "Jack";
    stud[2].rollno = 3;
    stud[2].perc = 70.0;

    printf("stud[0].name = %s\n", stud[0].name);     // John
    printf("stud[0].rollno = %d\n", stud[0].rollno); // 1
    printf("stud[0].perc = %.2f\n", stud[0].perc);   // 90.00
    printf("stud[1].name = %s\n", stud[1].name);     // Jane
    printf("stud[1].rollno = %d\n", stud[1].rollno); // 2
    printf("stud[1].perc = %.2f\n", stud[1].perc);   // 80.00
    printf("stud[2].name = %s\n", stud[2].name);     // Jack
    printf("stud[2].rollno = %d\n", stud[2].rollno); // 3
    printf("stud[2].perc = %.2f\n", stud[2].perc);   // 70.00

    return 0;
}
