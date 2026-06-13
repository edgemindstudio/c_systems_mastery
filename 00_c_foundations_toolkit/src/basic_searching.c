/*
Write a C program that reads integers into an array
and searches for a target value using linear search.
*/

#include <stdio.h>

int main() {
    int numbers[100];
    int n, i, target, foundIndex;
    int found = 0;

    printf("Linear Search Program\n");

    printf("How many numbers do you want to enter? ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    if (n <= 0 || n > 100) {
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

    printf("Enter target number: ");

    if (scanf("%d", &target) != 1){
        printf("Error: Invalid integer\n");
        return 1;
    }

    for (i = 0; i < n; i++){
        if (numbers[i] == target){
            found = 1;
            foundIndex = i;
            break;
        }
    }

    if (found == 1){
        printf("%d found at index %d\n", target, foundIndex);
        printf("%d found at position %d\n", target, foundIndex + 1);
    }
    else{
        printf("%d was not found\n", target);
    }

    return 0;
}
