// 02_arrays_pointers_mastery_lab/src/phase01_1d_arrays/array_statistics.c

#include <stdio.h>

#include "array_utils.h"
#include "input_utils.h"

#define MAX_ARRAY_SIZE 100


/* Runs the array-statistics exercise. */
void run_array_statistics(void) {
    int numbers[MAX_ARRAY_SIZE];
    int n;

    printf("Array Statistics\n");
    printf("----------------\n");

    /* Read and validate the number of array elements. */
    if (!read_int_in_range(
            "How many numbers do you want to enter? ",
            1,
            MAX_ARRAY_SIZE,
            &n)) {
        printf("Invalid size. Please enter a number between 1 and %d.\n",
               MAX_ARRAY_SIZE);
        return;
    }

    /* Read n integers into the numbers array. */
    if (!read_int_array(numbers, n)) {
        return;
    }

    /* Calculate and display the array statistics. */
    printf("\nSum = %d\n", array_sum(numbers, n));
    printf("Average = %.2f\n", array_average(numbers, n));
    printf("Minimum = %d\n", array_min(numbers, n));
    printf("Maximum = %d\n", array_max(numbers, n));
}