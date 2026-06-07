#include "number_utils.h"

int countDigits(int n) {
    int count = 0;

    if (n == 0) {
        return 1;
    }

    while (n != 0) {
        n = n / 10;
        count++;
    }

    return count;
}

int factorial(int n) {
    int result = 1;
    int i;

    for (i = 1; i <= n; i++) {
        result = result * i;
    }

    return result;
}

int power(int base, int exponent) {
    int result = 1;
    int i;

    for (i = 1; i <= exponent; i++) {
        result = result * base;
    }

    return result;
}