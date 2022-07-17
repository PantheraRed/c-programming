// Includes a header file
#include <stdio.h>

// Defines a macro
#define MAX_LENGTH 5

// If the macro is defined, the code is executed
#ifdef MAX_LENGTH
    #undef MAX_LENGTH
    #define MAX_LENGTH 10
#endif

// If the macro is undefined, the code is executed
#ifndef MAX_LENGTH
    #define MAX_LENGTH 20
#endif

// If condition is true, the code is executed
#if 1 > 2
    #define RESULT "1 > 2"
#elif 1 < 2
    #define RESULT "1 < 2"
// Else the other code is executed
#else
    #define RESULT "1 == 2"
#endif

// If DEBUG is defined, it defines the macro DEBUG_PRINT as a function
#ifdef DEBUG
    #define DEBUG_PRINT(x) printf(x)
// Else the macro is defined as a null function
#else
    #define DEBUG_PRINT(x)
#endif

// If macro is undefined, error is printed
// #ifndef SOME_MACRO
//     #error "SOME_MACRO is not defined"
// #endif

void print_startup_message();
void print_exit_message();

// Pragma directive is compiler specific
// For example, GCC does not support startup or exit so the following code will not work in GCC:
// #pragma startup print_startup_message
// #pragma exit print_exit_message

// Alternative to the code above for GCC
void __attribute__((constructor)) print_startup_message();
void __attribute__((destructor)) print_exit_message();

void print_startup_message()
{
    printf("This is startup message\n");
}

void print_exit_message()
{
    printf("This is exit message\n");
}

// To print message during the time of compilation
// #pragma message "This is a compiler message"

// To poison an identifier in GCC
// #pragma GCC poison printf

int main()
{
    int i, a[MAX_LENGTH] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("a: ");

    for (i = 0; i < MAX_LENGTH; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nMAX_LENGTH: %d\n", MAX_LENGTH); // 10
    printf("RESULT: %s\n", RESULT); // 1 < 2
    DEBUG_PRINT("Only prints when -DDEBUG flag is passed to the GCC\n");

    return 0;
}
