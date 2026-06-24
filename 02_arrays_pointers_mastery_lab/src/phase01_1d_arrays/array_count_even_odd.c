// 02_arrays_pointers_mastery_lab/src/phase01_1d_arrays/array_count_even_odd.c

#include <stdio.h>
#include "array_utils.h"
#include "input_utils.h"

#define MAX_ARRAY_SIZE 100

void run_array_count_even_odd(void) {
    int numbers[MAX_ARRAY_SIZE];
    int n;
    int even_count;
    int odd_count;

    printf("Array Count Even and Odd\n");
    printf("------------------------\n");

    /* Read and validate the number of elements. */
    if (!read_int_in_range(
            "How many numbers do you want to enter? ",
            1,
            MAX_ARRAY_SIZE,
            &n)) {
        printf("Invalid size. Please enter a number between 1 and %d.\n",
               MAX_ARRAY_SIZE);
        return;
    }

    /* Read n integers into the array. */
    if (!read_int_array(numbers, n)) {
        printf("Invalid integer input.\n");
        return;
    }

    /* Count even and odd numbers in the array. */
    if (!array_count_even_odd(numbers, n, &even_count, &odd_count)) {
        printf("Error counting even and odd numbers.\n");
        return;
    }

    /* Display the counts of even and odd numbers. */
    printf("Even count: %d\n", even_count);
    printf("Odd count: %d\n", odd_count);
}
