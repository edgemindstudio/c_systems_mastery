/*
Write a C program that reads integers into an array
and sorts them in ascending order using bubble sort.
*/

#include <stdio.h>

int main() {
    int numbers[100];
    int n, i, j, temp;

    printf("Basic Sorting Program\n");

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

    // Loop through and print each element
    printf("Original Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n"); // Newline at the end

    // Ascending order bubble sort
    // i represents the number of completed passes.
    // After each pass, one largest remaining value moves to its final position at the end.
    for (i = 0; i < n - 1; i++) {

        // j moves from left to right through the unsorted part of the array.
        // We stop at n - 1 - i because the last i elements are already sorted.
        for (j = 0; j < n - 1 - i; j++) {

            // Compare two neighboring elements: numbers[j] and numbers[j + 1].
            // If the left value is bigger than the right value, they are in the wrong order.
            if (numbers[j] > numbers[j + 1]) {

                // Swap the two neighboring values using temp.
                // temp protects numbers[j] so it does not get lost.
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    // Print the sorted array
    printf("Sorted Array:   ");
    for (int i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}