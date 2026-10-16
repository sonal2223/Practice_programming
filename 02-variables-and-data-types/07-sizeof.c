//Program 7 — Find the size of a data type
//The sizeof operator tells you how much memory a type or variable occupies in bytes.
//%zu is the correct format specifier for the result of sizeof.
#include <stdio.h>
int main() {
    printf("int=%zu bytes\n", sizeof(int));//4
    printf("float=%zu bytes\n", sizeof(float));//4
    printf("double=%zu bytes\n", sizeof(double));//8
    printf("char=%zu bytes\n", sizeof(char));//1
}

