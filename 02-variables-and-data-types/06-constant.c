//A constant is a value you do not want to change after defining it.
#include <stdio.h>
int main() {
    const float PI = 3.14;
    int radius = 5;

    float area = PI * radius * radius;

    printf("Area = %.2f\n", area);
}

