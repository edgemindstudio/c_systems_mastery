// 02_arrays_pointers_mastery_lab/lib/input_utils.c

#include "input_utils.h"

#include <ctype.h>
#include <errno.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

#define INPUT_BUFFER_SIZE 128

int read_int(const char *prompt, int *out_value) {
    /*
        line stores the raw text typed by the user.

        We read input as text first instead of reading directly as an int.
        This gives us a chance to validate the input carefully before
        accepting it.
    */
    char line[INPUT_BUFFER_SIZE];

    /*
        endptr will be used by strtol.

        After strtol converts the numeric part of the string, endptr will
        point to the first character that was NOT part of the number.

        Example:
            "123abc"  -> value becomes 123
                         endptr points to 'a'
    */
    char *endptr;

    /*
        strtol returns a long, not an int.

        We first store the converted number as a long, then later check
        whether it safely fits inside the int range.
    */
    long value;

    /*
        out_value must point to a real int variable.

        If out_value is NULL, the function has nowhere to store the
        converted integer. Dereferencing NULL would be dangerous and may
        crash the program.
    */
    if (out_value == NULL) {
        return 0;
    }

    /*
        Print the prompt only if the caller provided one.

        This allows both:
            read_int("Enter number: ", &n);

        and:
            read_int(NULL, &n);
    */
    if (prompt != NULL) {
        printf("%s", prompt);
    }

    /*
        Read one full line from standard input.

        fgets is safer than scanf because we tell it the size of the buffer.
        This prevents writing beyond the bounds of the line array.

        If fgets returns NULL, reading failed or input ended.
    */
    if (fgets(line, sizeof(line), stdin) == NULL) {
        return 0;
    }

    /*
        Reset errno before calling strtol.

        strtol may set errno to ERANGE if the number is too large or too
        small to fit in a long. Clearing errno first helps us know whether
        strtol itself caused the error.
    */
    errno = 0;

    /*
        Convert the text in line to a long integer.

        Arguments:
            line     -> the string to convert
            &endptr  -> where strtol should store the stopping position
            10       -> base 10 decimal conversion

        Example:
            line = "42\n"
            value = 42
            endptr points to '\n'
    */
    value = strtol(line, &endptr, 10);

    /*
        If endptr is still equal to line, strtol did not convert anything.

        Example:
            line = "abc"

        Since the first character is not part of a valid number,
        conversion never started.
    */
    if (endptr == line) {
        return 0;
    }

    /*
        Skip trailing whitespace after the number.

        fgets usually keeps the newline character when the user presses Enter.
        For example:
            "42\n"

        The newline is not invalid input, so we skip whitespace characters
        before checking for extra junk.
    */
    while (isspace((unsigned char)*endptr)) {
        endptr++;
    }

    /*
        After skipping whitespace, we should be at the end of the string.

        If we are not at '\0', then the user typed extra invalid characters.

        Examples rejected here:
            "42abc"
            "10hello"
            "3.14"
    */
    if (*endptr != '\0') {
        return 0;
    }

    /*
        Check for overflow and int range errors.

        errno == ERANGE means strtol detected that the number was outside
        the range of a long.

        The INT_MIN and INT_MAX checks make sure the long value can safely
        fit inside an int before we cast it.
    */
    if (errno == ERANGE || value < INT_MIN || value > INT_MAX) {
        return 0;
    }

    /*
        Store the final validated integer in the caller's variable.

        out_value is an address.
        *out_value means "the int variable at that address."
    */
    *out_value = (int)value;

    /*
        Return 1 to mean success.

        In this helper function:
            1 means valid integer was read
            0 means invalid input or failure
    */
    return 1;
}


int read_int_in_range(const char *prompt, int min_value, int max_value, int *out_value) {
    /*
        value is a temporary local variable.

        We first read the user's input into this variable.
        Only after we confirm that it is inside the allowed range
        do we copy it into *out_value.
    */
    int value;

    /*
        out_value must point to a real int variable.

        If out_value is NULL, this function has nowhere to store
        the final accepted number.

        Returning 0 means failure.
    */
    if (out_value == NULL) {
        return 0;
    }

    /*
        Reuse read_int to safely read one integer.

        read_int already handles:
            - printing the prompt
            - reading with fgets
            - converting with strtol
            - rejecting non-integer input
            - checking overflow
            - storing the valid integer in value

        If read_int returns 0, that means the input was invalid,
        so this function also fails immediately.
    */
    if (!read_int(prompt, &value)) {
        return 0;
    }

    /*
        Check whether the valid integer is inside the allowed range.

        Example:
            min_value = 1
            max_value = 100

        Accepted:
            1, 2, 50, 100

        Rejected:
            0, -5, 101
    */
    if (value < min_value || value > max_value) {
        return 0;
    }

    /*
        At this point, the input passed both checks:

            1. It is a valid integer.
            2. It is inside the allowed range.

        Now we store it in the caller's variable.
    */
    *out_value = value;

    /*
        Return 1 to mean success.

        In this helper function:
            1 means valid integer within range
            0 means invalid input or out-of-range input
    */
    return 1;
}