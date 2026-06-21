// 02_arrays_pointers_mastery_lab/lib/input_utils.c

#include "input_utils.h"

#include <ctype.h>
#include <errno.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

#define INPUT_BUFFER_SIZE 128


/*
    Reads and validates one integer.

    Returns:
        1 on success
        0 on failure
*/
int read_int(const char *prompt, int *out_value) {
    char line[INPUT_BUFFER_SIZE];
    char *endptr;
    long value;

    /* Stop if there is nowhere to store the result. */
    if (out_value == NULL) {
        return 0;
    }

    /* Display the prompt when one is provided. */
    if (prompt != NULL) {
        printf("%s", prompt);
    }

    /* Read the user's input as a line of text. */
    if (fgets(line, sizeof(line), stdin) == NULL) {
        return 0;
    }

    /* Clear any previous conversion error. */
    errno = 0;

    /* Convert the text to a base-10 long integer. */
    value = strtol(line, &endptr, 10);

    /* Reject input when no number was converted. */
    if (endptr == line) {
        return 0;
    }

    /* Skip whitespace left after the number, including the newline. */
    while (isspace((unsigned char)*endptr)) {
        endptr++;
    }

    /* Reject extra characters after the number. */
    if (*endptr != '\0') {
        return 0;
    }

    /* Reject overflow or values that do not fit inside an int. */
    if (errno == ERANGE || value < INT_MIN || value > INT_MAX) {
        return 0;
    }

    /* Store the validated integer in the caller's variable. */
    *out_value = (int)value;

    return 1;
}


/*
    Reads an integer and checks that it is within a given range.

    Returns:
        1 on success
        0 on failure
*/
int read_int_in_range(
    const char *prompt,
    int min_value,
    int max_value,
    int *out_value
) {
    int value;

    /* Stop if there is nowhere to store the result. */
    if (out_value == NULL) {
        return 0;
    }

    /* Read one validated integer into a temporary variable. */
    if (!read_int(prompt, &value)) {
        return 0;
    }

    /* Reject values outside the allowed range. */
    if (value < min_value || value > max_value) {
        return 0;
    }

    /* Store the accepted value in the caller's variable. */
    *out_value = value;

    return 1;
}



/*
    Reads n integers from the user and stores them in arr.

    Returns:
        1 on success
        0 on failure
*/
int read_int_array(int arr[], int n) {
    char prompt[64];

    /* Stop if the array address or number of elements is invalid. */
    if (arr == NULL || n <= 0) {
        return 0;
    }

    /* Read one integer into each array position. */
    for (int i = 0; i < n; i++) {
        /* Create a prompt such as "Enter number 1: ". */
        snprintf(prompt, sizeof(prompt), "Enter number %d: ", i + 1);

        /* Store the entered value directly in arr[i]. */
        if (!read_int(prompt, &arr[i])) {
            printf("Invalid input. Please enter a valid integer.\n");
            return 0;
        }
    }

    return 1;
}