/*
Write a C program that asks the user how many numbers they want to enter,
stores those numbers in an array, and then calculates:

sum
average
minimum
maximum

Example:

How many numbers do you want to enter? 5

Enter number 1: 10
Enter number 2: 20
Enter number 3: 5
Enter number 4: 30
Enter number 5: 15

Sum = 80
Average = 16.00
Minimum = 5
Maximum = 30
*/
#include <stdio.h>

int main(){
    int numbers[100];
    int n, i, sum, min, max;
    double average;

    printf("How many numbers you wish to enter?: ");

    if (scanf("%d", &n) != 1){
        printf("Error: Invalid integer\n");
        return 1;
    }

    if (n <= 0 || n > 100){
        printf("Invalid size. Please enter a number between 1 and 100.\n");
        return 1;
    }

    for (i = 0; i < n; i++){
        printf("Enter number %d: ", i + 1);

        if (scanf("%d", &numbers[i]) != 1){
            printf("Error: Invalid integer\n");
            return 1;
        }
    }

    sum = 0;
    min = numbers[0];
    max = numbers[0];

    for (i = 0; i < n; i++){
        sum = sum + numbers[i];

        if (numbers[i] < min){
            min = numbers[i];
        }

        if (numbers[i] > max){
            max = numbers[i];
        }
    }

    average = (double) sum / n;

    printf("Sum = %d\n", sum);
    printf("Average = %.2lf\n", average);
    printf("Min = %d\n", min);
    printf("Max = %d\n", max);

    return 0;
}
