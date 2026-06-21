#include <stdio.h>

#include "array_utils.h"
#include "input_utils.h"

#define MAX_ARRAY_SIZE 100

void run_array_reverse(void) {
    int numbers[MAX_ARRAY_SIZE];
    int n;

    printf("Array Reverse\n");
    printf("-------------\n");

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

    /* Display the array in its original order. */
    printf("Original array: ");
    array_print(numbers, n);

    /* Display the array in reverse order. */
    printf("Reverse order: ");
    array_print_reverse(numbers, n);
}