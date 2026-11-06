#include <stdio.h>
//Bubble sort arranges array elements in ascending or descending order by repeatedly swapping adjacent elements.
int main() {
    int a[] = {5, 2, 4, 1, 3};
    int i;
    int j;

    for (i = 0; i < 5; i++) {
        for ( j = 0; j < 4 - i; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    for ( i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
