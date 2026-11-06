#include <stdio.h>
//Insertion sort arranges elements by inserting each element into its correct position in the sorted portion of the array.
int main() {
    int a[] = {5, 3, 4, 1, 2};
    int i;
    int j;

    for (i = 1; i < 5; i++) {
        int key = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = key;
    }

    for (i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
