/*
Write a C program that performs a basic calculator operation.
The program should support +, -, *, and /.
*/
#include <stdio.h>

int main(){
    double num1, num2, result;
    char op;

    printf("Simple Calculator\n");

    printf("Enter first number: ");
    if (scanf("%lf", &num1) != 1) {
        printf("Invalid input. Please enter number.\n");
        return 1;
    }

    printf("Enter operator (+, -, *, /): ");
    if (scanf(" %c", &op) != 1) {
        printf("Invalid operator input.\n");
        return 1;
    }

    if (op != '+' && op != '-' && op != '*' && op != '/') {
        printf("Invalid operator. Operator must be one of these: +, -, *, /\n");
        return 1;
    }

    printf("Enter second number: ");
    if (scanf("%lf", &num2) != 1){
        printf("Invalid input. Please enter number.\n");
        return 1;
    }

    switch (op){
    case '+':
        result = num1 + num2;
        printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
        break;

    case '-':
        result = num1 - num2;
        printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
        break;

    case '*':
        result = num1 * num2;
        printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
        break;

    case '/':
        if (num2 == 0){
            printf("Error: division by zero\n");
        }
        else{
            result = num1 / num2;
            printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
        }
        break;
    }

    return 0;
}
