/*
Write a C program that asks the user for an integer and prints the reversed form of that integer.
*/
#include <stdio.h>

int main(){
    int num, temp, digit;
    int reverse = 0;
    int sign = 1;

    printf("This program reverses an integer entered by the user.\n");
    printf("Enter number: ");

    if (scanf("%d", &num) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    if (num < 0){
        sign = -1;
        temp = -num;
    }
    else{
        temp = num;
    }

    while(temp != 0){
        digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp = temp / 10;
    }

    reverse = reverse * sign;
    printf("The reverse of the integer %d is %d\n", num, reverse);

    return 0;
}
