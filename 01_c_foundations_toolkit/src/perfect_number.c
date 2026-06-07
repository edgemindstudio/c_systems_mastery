/*
Write a C program that asks the user for a number and
checks whether the number is a perfect number.

A perfect number is a positive number that is equal to the sum of its proper divisors.
A proper divisor is a divisor of a number, excluding the number itself.
*/

#include <stdio.h>

int main () {
    int num, i;
    int sum = 0;

    printf("Enter number: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Number MUST be positive\n");
    }
    else {
        for (i = 1; i < num; i++) {
            if (num % i == 0) {
                printf("%d is a proper divisor\n", i);
                sum += i;
            }
        }

        if (sum == num) {
            printf("%d is a perfect number\n", num);
        }
        else {
            printf("%d is NOT a perfect number\n", num);
        }
    }

    return 0;
}