/*
Write a C program that asks the user for a number of rows and prints Floyd’s triangle.
Floyd’s triangle is a triangle of consecutive numbers.

Example
Enter number of rows: 5

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/

#include <stdio.h>

int main(){
    int rows, i, j;
    int number = 1;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    if (rows <= 0){
        printf("Number of rows must be positive\n");
    }
    else{
        for (i=1; i<=rows; i++){
            for(j=1; j<=i; j++){
                printf("%d ", number);
                number++;
            }

            printf("\n");
        }
    }

    return 0;
}