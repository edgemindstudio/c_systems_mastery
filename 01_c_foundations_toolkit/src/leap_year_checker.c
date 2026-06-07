/*
Write a C program that asks the user for a year and
tells whether that year is a leap year or not a leap year.
A leap year has 366 days instead of 365 days.
*/

#include <stdio.h>

// Count digits in year
int countDigits(int n) {
    int count = 0;
    if (n == 0) return 1;
    while (n != 0) {
        n /= 10;
        count++;
    }
    return count;
}


int main() {
    int year, num_digits;
    printf("Enter year in format YYYY: ");
    scanf("%d", &year);
    num_digits = countDigits(year);

    if (year <= 0) {
        printf("Year must be greater than zero.\n");
    }

    else if (num_digits != 4) {
        printf("Enter a valid 4-digit year (e.g., 2017)\n");
    }

    else if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("%d is a leap year\n", year);
    }

    else{
        printf("%d is NOT a leap year\n", year);
    }

    return 0;

}
