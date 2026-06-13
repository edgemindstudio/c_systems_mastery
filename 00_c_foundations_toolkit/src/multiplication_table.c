/*
Write a C program that asks the user for an integer
and prints its multiplication table from 1 to 12.
*/
#include <stdio.h>

int main(){
    int number, i;

    printf("This program prints the multiplication table for a number entered by the user.\n");
    printf("Enter number: ");

    if (scanf("%d", &number) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    for (i = 1; i <= 12; i++){
        printf("%d x %d = %d\n", number, i, number*i);
    }

    return 0;
}