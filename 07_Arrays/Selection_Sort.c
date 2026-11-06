#include <stdio.h>
//Selection sort repeatedly selects the smallest element and places it in the correct position.
int main() {
    int a[] = {5, 3, 4, 1, 2};
    int i;
    int j;

    for (i = 0; i < 5; i++) {
        int min = i;

        for (j = i + 1; j < 5; j++) {
            if (a[j] < a[min]) {
                min = j;
            }
        }

        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }

    for (i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
