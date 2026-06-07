/*
Write a C program that asks the user for a base and exponent
and calculates the power of the base.
*/

#include <stdio.h>

int main() {
    double base;
    double result = 1.0;
    int exponent, positive_exponent, i;

    printf("This program calculates the power of a number.\n");

    printf("Enter the base: ");
    scanf("%lf", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    if ((base == 0) && (exponent < 0)) {
        printf("Error: Zero cannot have a negative exponent\n");
    }
    else {
        if (exponent < 0) {
            positive_exponent = -exponent;
        }
        else {
            positive_exponent = exponent;
        }

        for (i = 1; i <= positive_exponent; i++) {
            result = result * base;
        }

        if (exponent < 0) {
            result = 1.0 / result;
        }

        printf("%.2lf to the power %d = %.2lf\n", base, exponent, result);
    }

    return 0;
}
