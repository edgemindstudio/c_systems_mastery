/*
Write a C program that asks the user for a number n and prints the first n Fibonacci terms.
The Fibonacci sequence is a mathematical pattern where each number is the sum of the two preceding ones
*/

#include <stdio.h>

int main(){
    int i, n, next;
    int first = 0;
    int second = 1;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    if (n<=0){
        printf("Number of terms must be positive\n");
    }
    else{
        printf("Fibonacci series: ");

        for (i=1; i<=n; i++){
            printf("%d ", first);

            next =  first + second;
            first = second;
            second = next;
        }
    }

    return 0;
}
