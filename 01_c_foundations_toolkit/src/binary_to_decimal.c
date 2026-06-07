/*
Write a C program that asks the user for a binary number and converts it to decimal.
*/

#include <stdio.h>

// Function prototypes
int binary_checker(int num);
int binaryToDecimal(int num);
int countDigits(int num);

int main() {
    int binary, decimal, is_valid;

    printf("This program converts a binary number small enough to fit in int to decimal.\n");
    printf("Enter a binary number with at most 8 digits: ");
    scanf("%d", &binary);

    if (binary < 0) {
        printf("Binary number cannot be negative\n");
    }
    else if (countDigits(binary) >= 9) {
        printf("Invalid input: binary number must have at most 8 digits\n");
    }
    else {
        is_valid = binary_checker(binary);

        if (is_valid == 1) {
            decimal = binaryToDecimal(binary);
            printf("%d binary = %d in decimal\n", binary, decimal);
        }
        else {
            printf("Invalid binary number\n");
        }
    }

    return 0;
}

// Binary to decimal converter function
int binaryToDecimal(int num) {
    int digit;
    int temp = num;
    int decimal = 0;
    int place_value = 1;

    while (temp != 0) {
        digit = temp % 10;
        decimal = decimal + (digit * place_value);
        place_value = place_value * 2;
        temp = temp / 10;
    }

    return decimal;
}

// Function that checks if a number is binary or not
int binary_checker(int num) {
    int digit;
    int temp = num;

    if (temp == 0) {
        return 1;
    }

    while (temp != 0) {
        digit = temp % 10;

        if (digit != 0 && digit != 1) {
            return 0;
        }

        temp = temp / 10;
    }

    return 1;
}

// Count digit function
int countDigits(int num) {
    int count = 0;

    if (num == 0) {
        return 1;
    }

    while (num != 0) {
        num = num / 10;
        count++;
    }

    return count;
}
