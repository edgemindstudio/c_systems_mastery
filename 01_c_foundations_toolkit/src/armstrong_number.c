/*
Write a C program that asks the user for a number and
checks whether it is an Armstrong number.

An Armstrong number is a number that is equal to the sum of its digits
raised to the power of the number of digits.
*/

#include <stdio.h>

// Function prototypes
int countDigits(int n);
int power(int base, int exponent);

int main () {
    int num, original, temp, digits, digit;
    int sum = 0;

    printf("Kindly Enter Number: ");
    scanf("%d", &num);

    if (num < 0){
        printf("Armstrong check is for non-negative numbers\n");
    }
    else {
        original = num;
        temp = num;

        digits = countDigits(num);

        while (temp != 0){
            digit = temp % 10;
            sum = sum + power(digit, digits);
            temp = temp / 10;
        }

        if (sum == original){
            printf("%d is an Armstrong Number\n", original);
        }
        else {
            printf("%d is not an Armstrong Number\n", original);
        }
    }

    return 0;
}


// Count Number of Digits Function
int countDigits (int n) {
    int count = 0;
    if (n == 0){
        return 1;
    }

    while (n != 0){
        n = n / 10;
        count++;
    }

    return count;
}

// Power Function
int power(int base, int exponent){
    int result = 1;
    int i;

    for (i=1; i<=exponent; i++){
        result = result * base;
    }

    return result;
}