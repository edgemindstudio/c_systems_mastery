// 02_arrays_pointers_mastery_lab/src/phase01_1d_arrays/array_statistics.c

#include <stdio.h>

#include "array_utils.h"
#include "input_utils.h"

#define MAX_ARRAY_SIZE 100

static int read_array(int arr[], int n) {
    char prompt[64];

    if (arr == NULL || n <= 0) {
        return 0;
    }

    for (int i = 0; i < n; i++) {
        snprintf(prompt, sizeof(prompt), "Enter number %d: ", i + 1);

        if (!read_int(prompt, &arr[i])) {
            printf("Invalid input. Please enter a valid integer.\n");
            return 0;
        }
    }

    return 1;
}

void run_array_statistics(void) {
    int numbers[MAX_ARRAY_SIZE];
    int n;

    printf("Array Statistics\n");
    printf("----------------\n");

    if (!read_int_in_range("How many numbers do you want to enter? ",
                           1,
                           MAX_ARRAY_SIZE,
                           &n)) {
        printf("Invalid size. Please enter a number between 1 and %d.\n", MAX_ARRAY_SIZE);
        return;
    }

    if (!read_array(numbers, n)) {
        return;
    }

    printf("\nSum = %d\n", array_sum(numbers, n));
    printf("Average = %.2f\n", array_average(numbers, n));
    printf("Minimum = %d\n", array_min(numbers, n));
    printf("Maximum = %d\n", array_max(numbers, n));
}