/*
Write a C program that asks the user for a number
and check whether the number is a Strong Number.

A strong number is a number where the sum of the factorials
of its digits equals the original number.
*/

#include <stdio.h>

// Function prototype
int factorial(int n);

int main () {
    int num, original, temp, digit;
    int sum = 0;

    printf("Kindly Enter Number: ");
    scanf("%d", &num);

    if (num <= 0){
        printf("Strong number check is for positive numbers\n");
    }
    else{
        original = num;
        temp = num;

        while (temp != 0){
            digit = temp % 10;
            sum = sum + factorial(digit);
            temp = temp / 10;
        }

        if (sum == original){
            printf("%d is a strong number\n", original);
        }
        else {
            printf("%d is not a strong number\n", original);
        }
    }

    return 0;
}

// Factorial Function
int factorial(int n){
    int result = 1;
    int i;

    for (i=1; i<=n; i++){
        result = result * i;
    }

    return result;
}
