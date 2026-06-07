/*
Write a C program that asks the user for a number and
checks whether the number is prime or not prime.
A prime number is a number greater than 1 that has exactly two factors:
1 and itself.
*/

#include <stdio.h>

int main() {
    int num, i;
    int is_prime = 1;

    printf("Enter number: ");
    scanf("%d", &num);

    if (num <= 1) {
        is_prime = 0;
    }
    else {
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                is_prime = 0;
                break;
            }
        }
    }

    if (is_prime == 1) {
        printf("%d is a prime number\n", num);
    }
    else {
        printf("%d is NOT a prime number\n", num);
    }

    return 0;
}