#include "main.h"

/***/
void print_diagsums(int *a, int size) {
    int sum1 = 0;
    int sum2 = 0;

    for (int i = 0; i < size; i++) {
        sum1 += a[i * size + i];           // Sum of the main diagonal.
        sum2 += a[i * size + (size - 1 - i)]; // Sum of the other diagonal.
    }

    printf("%d, %d\n", sum1, sum2);
}

