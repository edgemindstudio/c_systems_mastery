/*
Write a C program that asks the user for a number of rows and prints a pyramid of stars.

Example
Enter number of rows: 5

    *
   ***
  *****
 *******
*********
*/

#include <stdio.h>

int main(){
    int rows, i, space, star;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    if (rows <= 0){
        printf("Number of rows must be positive");
    }
    else{
        for(i=1; i<=rows; i++){
            for(space=1; space<=rows-i; space++){
                printf(" ");
            }
            for(star=1; star<=(2*i)-1; star++){
                printf("*");
            }
            printf("\n");
        }
    }

    return 0;
}
