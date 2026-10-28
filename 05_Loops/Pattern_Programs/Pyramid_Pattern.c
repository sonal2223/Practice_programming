#include <stdio.h>
//A pyramid pattern program uses loops to print stars in a pyramid shape.
int main() {
	int i;
	int j;
	int k;
    for ( i = 1; i <= 3; i++) {
        for ( j = 1; j <= 3 - i; j++)
            printf(" ");

        for ( k = 1; k <= 2 * i - 1; k++)
            printf("*");

        printf("\n");
    }

    return 0;
}
