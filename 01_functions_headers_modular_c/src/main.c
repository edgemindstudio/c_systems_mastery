#include <stdio.h>
#include "number_utils.h"

int main() {
    int number = 153;
    int base = 5;
    int exponent = 3;

    printf("Testing number_utils functions\n\n");

    printf("countDigits(%d) = %d\n", number, countDigits(number));
    printf("factorial(5) = %d\n", factorial(5));
    printf("power(%d, %d) = %d\n", base, exponent, power(base, exponent));

    return 0;
}