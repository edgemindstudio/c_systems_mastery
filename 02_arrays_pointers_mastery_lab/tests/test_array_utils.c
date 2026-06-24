// 02_arrays_pointers_mastery_lab/tests/test_array_utils.c

#include <stdio.h>

#include "array_utils.h"

static int test_array_statistics_positive_numbers(void) {
    int arr[] = {10, 20, 5, 30, 15};
    int n = 5;

    if (array_sum(arr, n) != 80) {
        return 0;
    }

    if (array_average(arr, n) != 16.0) {
        return 0;
    }

    if (array_min(arr, n) != 5) {
        return 0;
    }

    if (array_max(arr, n) != 30) {
        return 0;
    }

    return 1;
}

static int test_array_statistics_negative_numbers(void) {
    int arr[] = {-10, -5, -20};
    int n = 3;

    if (array_sum(arr, n) != -35) {
        return 0;
    }

    if (array_min(arr, n) != -20) {
        return 0;
    }

    if (array_max(arr, n) != -5) {
        return 0;
    }

    return 1;
}

static int test_array_statistics_single_number(void) {
    int arr[] = {42};
    int n = 1;

    if (array_sum(arr, n) != 42) {
        return 0;
    }

    if (array_average(arr, n) != 42.0) {
        return 0;
    }

    if (array_min(arr, n) != 42) {
        return 0;
    }

    if (array_max(arr, n) != 42) {
        return 0;
    }

    return 1;
}

// Test mixed array.
static int test_array_count_even_odd_mixed(void) {
    int arr[] = {10, 7, 4, -3, 0, 12};
    int even_count;
    int odd_count;

    if (!array_count_even_odd(arr, 6, &even_count, &odd_count)) {
        return 0;
    }

    if (even_count != 4) {
        return 0;
    }

    if (odd_count != 2) {
        return 0;
    }

    return 1;
}

static int test_array_count_even_odd_all_even(void) {
    int arr[] = {2, 4, 0, -8};
    int even_count;
    int odd_count;

    if (!array_count_even_odd(arr, 4, &even_count, &odd_count)) {
        return 0;
    }

    if (even_count != 4) {
        return 0;
    }

    if (odd_count != 0) {
        return 0;
    }

    return 1;
}

static int test_array_count_even_odd_all_odd(void) {
    int arr[] = {1, -3, 5, 11};
    int even_count;
    int odd_count;

    if (!array_count_even_odd(arr, 4, &even_count, &odd_count)) {
        return 0;
    }

    if (even_count != 0) {
        return 0;
    }

    if (odd_count != 4) {
        return 0;
    }

    return 1;
}


int main(void) {
    int passed = 0;
    int total = 6;

    if (test_array_statistics_positive_numbers()) {
        printf("PASS: positive numbers\n");
        passed++;
    } else {
        printf("FAIL: positive numbers\n");
    }

    if (test_array_statistics_negative_numbers()) {
        printf("PASS: negative numbers\n");
        passed++;
    } else {
        printf("FAIL: negative numbers\n");
    }

    if (test_array_statistics_single_number()) {
        printf("PASS: single number\n");
        passed++;
    } else {
        printf("FAIL: single number\n");
    }

    if (test_array_count_even_odd_mixed()) {
        printf("PASS: count even/odd mixed\n");
        passed++;
    } else {
        printf("FAIL: count even/odd mixed\n");
    }

    if (test_array_count_even_odd_all_even()) {
        printf("PASS: count even/odd all even\n");
        passed++;
    } else {
        printf("FAIL: count even/odd all even\n");
    }

    if (test_array_count_even_odd_all_odd()) {
        printf("PASS: count even/odd all odd\n");
        passed++;
    } else {
        printf("FAIL: count even/odd all odd\n");
    }

    printf("\n%d/%d tests passed.\n", passed, total);

    return passed == total ? 0 : 1;
}