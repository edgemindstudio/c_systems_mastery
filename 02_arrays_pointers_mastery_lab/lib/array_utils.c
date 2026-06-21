// 02_arrays_pointers_mastery_lab/lib/array_utils.c

#include "array_utils.h"
#include <stdio.h>

// Exercise 1: Array statistics

int array_sum(const int arr[], int n) {
    int sum = 0;

    if (arr == 0 || n <= 0) {
        return 0;
    }

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    return sum;
}

double array_average(const int arr[], int n) {
    int sum;

    if (arr == 0 || n <= 0) {
        return 0.0;
    }

    sum = array_sum(arr, n);

    return (double)sum / n;
}

int array_min(const int arr[], int n) {
    int min;

    if (arr == 0 || n <= 0) {
        return 0;
    }

    min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    return min;
}

int array_max(const int arr[], int n) {
    int max;

    if (arr == 0 || n <= 0) {
        return 0;
    }

    max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

// Exercise 2: Reverse array

/* Prints the array from beginning to end. */
void array_print(const int arr[], int n) {
    int i;

    /* Stop if the array is invalid or has no elements. */
    if (arr == NULL || n <= 0) {
        return;
    }

    /* Print each element from index 0 to index n - 1. */
    for (i = 0; i < n; i++) {
        // Avoid trailing space at the end of array
        if (i > 0) {
            printf(" ");
        }
        
        printf("%d", arr[i]);
    }

    printf("\n");
}

/* Prints the array from end to beginning. */
void array_print_reverse(const int arr[], int n) {
    int i;

    /* Stop if the array is invalid or has no elements. */
    if (arr == NULL || n <= 0) {
        return;
    }

    /* Print each element from index n - 1 down to index 0. */
    for (i = n - 1; i >= 0; i--) {
        // Avoid trailing space at the end of reverse
        if (i < n - 1) {
            printf(" ");
        }
        
        printf("%d", arr[i]);
    }

    printf("\n");
}