// 02_arrays_pointers_mastery_lab/src/phase01_1d_arrays/array_statistics.c

#include <stdio.h>

/*
    Provides declarations for the reusable array-processing functions:

        array_sum()
        array_average()
        array_min()
        array_max()
*/
#include "array_utils.h"

/*
    Provides declarations for the reusable input functions:

        read_int()
        read_int_in_range()
*/
#include "input_utils.h"

/*
    Defines the maximum number of integers that the program can store.

    MAX_ARRAY_SIZE is replaced with 100 by the preprocessor before
    compilation.

    This value is used both to:

        1. Create the numbers array.
        2. Limit the number of values the user may enter.
*/
#define MAX_ARRAY_SIZE 100


/*
    Reads n integers from the user and stores them in arr.

    Parameters:
        arr -> points to the first element of the caller's integer array
        n   -> number of array elements that must be filled

    Return value:
        1 -> every integer was read successfully
        0 -> invalid arguments or invalid user input

    The function is declared static because it is an internal helper
    that should only be used inside this source file.
*/
static int read_array(int arr[], int n) {
    /*
        Stores the prompt displayed for each array element.

        Examples:
            "Enter number 1: "
            "Enter number 2: "
            "Enter number 3: "

        The array has room for 64 characters, including the final
        null terminator '\0'.
    */
    char prompt[64];

    /*
        Validate the function arguments before using them.

        arr == NULL:
            The function did not receive a valid array address.
            Attempting to access arr[i] would be unsafe.

        n <= 0:
            There are no valid elements to read.

        Return 0 to report failure.
    */
    if (arr == NULL || n <= 0) {
        return 0;
    }

    /*
        Repeat once for every array element that must be filled.

        The loop begins with:
            i = 0

        It continues while:
            i < n

        After each iteration:
            i increases by 1

        Therefore, the valid indexes visited are: 0, 1, 2, ..., n - 1
    */
    for (int i = 0; i < n; i++) {
        /*
            Build the prompt for the current array element.

            snprintf safely writes formatted text into prompt.

            Arguments:
                prompt         -> destination character array
                sizeof(prompt) -> maximum number of bytes available
                format string  -> text pattern to create
                i + 1          -> user-friendly number to display

            The array index begins at 0, but the displayed number begins
            at 1.

            Examples:
                i = 0 -> "Enter number 1: "
                i = 1 -> "Enter number 2: "
                i = 2 -> "Enter number 3: "
        */
        snprintf(prompt, sizeof(prompt), "Enter number %d: ", i + 1);

        /*
            Read one validated integer and store it directly in arr[i].

            &arr[i] means:
                "the address of the current array element"

            read_int receives that address and stores the accepted integer
            in the original array.

            read_int returns:
                1 -> success
                0 -> failure

            The logical NOT operator ! reverses the result:

                read_int returns 1 -> !1 becomes 0
                read_int returns 0 -> !0 becomes 1

            Therefore, the body of this if statement runs only when
            read_int fails.
        */
        if (!read_int(prompt, &arr[i])) {
            /*
                Inform the user that the entered value was not a valid
                integer.
            */
            printf("Invalid input. Please enter a valid integer.\n");

            /*
                Stop reading the array immediately and report failure
                to the caller.
            */
            return 0;
        }
    }

    /*
        Reaching this line means every requested array element was
        read successfully.

        Return 1 to report success.
    */
    return 1;
}


/*
    Runs the complete array-statistics exercise.

    This function:

        1. Creates an integer array.
        2. Asks how many values the user wants to enter.
        3. Validates the requested array size.
        4. Reads the array elements.
        5. Calculates and prints the sum, average, minimum, and maximum.

    It returns void because it does not send a value back to main().
*/
void run_array_statistics(void) {
    /*
        Create space for at most MAX_ARRAY_SIZE integers.

        Since MAX_ARRAY_SIZE is 100, this is equivalent to:

            int numbers[100];

        The array elements are initially uninitialized. They receive
        values later when read_array() runs.
    */
    int numbers[MAX_ARRAY_SIZE];

    /*
        Stores the number of values the user wants to enter.

        After validation, n will contain a value between 1 and
        MAX_ARRAY_SIZE.
    */
    int n;

    /*
        Print the title of the exercise.
    */
    printf("Array Statistics\n");

    /*
        Print a separator below the title.
    */
    printf("----------------\n");

    /*
        Ask the user how many numbers should be entered.

        Arguments passed to read_int_in_range:

            "How many..."   -> prompt displayed to the user
            1               -> smallest accepted value
            MAX_ARRAY_SIZE  -> largest accepted value
            &n              -> address where the accepted value is stored

        read_int_in_range returns:

            1 -> a valid integer inside the range was entered
            0 -> invalid input or value outside the range

        The ! operator means the if body runs when the function fails.
    */
    if (!read_int_in_range("How many numbers do you want to enter? ",
                           1,
                           MAX_ARRAY_SIZE,
                           &n)) {
        /*
            Inform the user that the requested size was invalid.

            %d is replaced with the value of MAX_ARRAY_SIZE.
        */
        printf("Invalid size. Please enter a number between 1 and %d.\n",
               MAX_ARRAY_SIZE);

        /*
            End run_array_statistics immediately.

            Because this function returns void, return does not include
            a value.
        */
        return;
    }

    /*
        Read n integers into the numbers array.

        When an array name is passed to a function, it provides the
        address of its first element.

        Therefore:

            numbers

        gives read_array access to the original array.

        read_array returns:

            1 -> all elements were read successfully
            0 -> reading failed

        If reading fails, stop the exercise immediately.
    */
    if (!read_array(numbers, n)) {
        return;
    }

    /*
        Calculate and print the sum of the first n elements.

        array_sum receives:
            numbers -> address of the first array element
            n       -> number of elements to process

        %d prints the returned integer.
    */
    printf("\nSum = %d\n", array_sum(numbers, n));

    /*
        Calculate and print the average of the first n elements.

        array_average returns a double.

        %.2f prints the floating-point result with exactly two digits
        after the decimal point.
    */
    printf("Average = %.2f\n", array_average(numbers, n));

    /*
        Find and print the smallest value among the first n elements.
    */
    printf("Minimum = %d\n", array_min(numbers, n));

    /*
        Find and print the largest value among the first n elements.
    */
    printf("Maximum = %d\n", array_max(numbers, n));

    /*
        After this final statement, run_array_statistics reaches the
        closing brace.

        Since its return type is void, control automatically returns to
        the line after the function call in main().

        main() then executes:

            return 0;

        and reports successful termination to the operating system.
    */
}