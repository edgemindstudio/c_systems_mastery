/*
Write a C program that asks the user for two integers and adds them without using the + operator.
*/
#include <stdio.h>

int main(){
    int a, b, sum, original_b;

    printf("This program adds two numbers without the addition operator\n");
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    sum = a;
    original_b = b;

    if (b > 0){
        while (b > 0){
            sum++;
            b--;
        }
    }
    else{
        while (b < 0){
            sum--;
            b++;
        }
    }

    printf("%d + %d = %d\n", a, original_b, sum);

    return 0;
}
