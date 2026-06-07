/*
Write a C program that asks the user for a number and checks
whether it is a palindrome.

A palindrome number reads the same forward and backward.
*/

#include <stdio.h>


int main () {
    int num, original, temp, digit;
    int reverse = 0;

    printf("Kindly Enter Number: ");
    scanf("%d", &num);

    if (num < 0){
        printf("Palindrome check is for non-negative numbers\n");
    }
    else{
        original = num;
        temp = num;

        while (temp != 0){
            digit = temp % 10;
            reverse = reverse * 10 + digit;
            temp = temp / 10;
        }

        if (reverse == original){
            printf("%d is a Palindrome\n", original);
        }
        else{
            printf("%d is not a Palindrome\n", original);
        }
    }

    return 0;
}