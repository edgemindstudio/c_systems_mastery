// 02_arrays_pointers_mastery_lab/lib/array_utils.c

#include "array_utils.h"

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