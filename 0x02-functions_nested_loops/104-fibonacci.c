#include <stdio.h>
#include "main.h"

/**
 * main - Print fibonacci
 *
 * Return: On success 0.
 */
#include <stdio.h>

int main(void) {
    unsigned long int i, j, k;

    j = 1;
    k = 2;

    printf("%lu", j);

    for (i = 1; i < 91; i++) {
        printf(", %lu", k);
        k = k + j;
        j = k - j;
    }

    for (i = 92; i < 99; ++i) {
        printf(", %lu%09lu", k / 1000000000, k % 1000000000);
        k = k + j;
        j = k - j;
    }

    printf("\n");

    return 0;
}
