# C Foundations Toolkit Notes

These notes summarize the main concepts learned while building the `00_c_foundations_toolkit` project.

This project focused on small C programs that build fluency with input/output, conditions, loops, digit processing, helper functions, arrays, searching, sorting, and basic validation.

---

## 1. Program Structure

A simple C program usually has this structure:

```c
#include <stdio.h>

int main() {
    // program logic

    return 0;
}
```

### Meaning

* `#include <stdio.h>` gives access to input/output functions like `printf` and `scanf`.
* `main()` is the entry point of the program.
* `return 0;` means the program finished successfully.

---

## 2. Input and Output

### Output with `printf`

```c
printf("Hello, world!\n");
```

`printf` prints text to the screen.

### Input with `scanf`

```c
scanf("%d", &number);
```

`scanf` reads input from the user.

The `&` is important because `scanf` needs the address of the variable where the input should be stored.

---

## 3. Checking `scanf`

A major lesson from this project is that `scanf` should be checked.

Example:

```c
if (scanf("%d", &number) != 1) {
    printf("Invalid input. Please enter an integer.\n");
    return 1;
}
```

### Mental Model

`scanf` returns the number of values it successfully read.

For example:

```c
scanf("%d", &number)
```

returns:

```text
1 if one integer was successfully read
0 if the input was not a valid integer
```

So if the user enters:

```text
123
```

then:

```text
number = 123
scanf returns 1
```

But if the user enters:

```text
hello
```

then:

```text
scanf returns 0
number is not safely updated
```

---

## 4. Conditions

C uses `if`, `else if`, and `else` for decision-making.

Example:

```c
if (number > 0) {
    printf("Positive\n");
}
else if (number < 0) {
    printf("Negative\n");
}
else {
    printf("Zero\n");
}
```

Conditions were used in:

* leap year checker
* prime checker
* calculator
* palindrome checker
* Armstrong number checker
* array statistics
* searching
* sorting

---

## 5. Logical Operators

Important logical operators:

| Operator | Meaning |   |    |
| -------- | ------- | - | -- |
| `&&`     | AND     |   |    |
| `        |         | ` | OR |
| `!`      | NOT     |   |    |

Example:

```c
if (n <= 0 || n > 100) {
    printf("Invalid size.\n");
}
```

This means:

```text
If n is less than or equal to 0 OR n is greater than 100, reject it.
```

---

## 6. Loops

### `for` Loop

Used when the number of repetitions is known.

```c
for (i = 0; i < n; i++) {
    printf("%d\n", i);
}
```

### `while` Loop

Used when repetition depends on a condition.

```c
while (number != 0) {
    number = number / 10;
}
```

Loops were used heavily for:

* digit extraction
* multiplication tables
* pattern printing
* arrays
* searching
* sorting

---

## 7. Digit Extraction Pattern

Several programs used this pattern:

```c
digit = number % 10;
number = number / 10;
```

### Mental Model

For a number like:

```text
1234
```

```c
1234 % 10
```

gives:

```text
4
```

This extracts the last digit.

Then:

```c
1234 / 10
```

gives:

```text
123
```

This removes the last digit.

This pattern appeared in:

* integer reversal
* palindrome checker
* Armstrong number checker
* strong number checker
* binary to decimal converter

---

## 8. Reversing an Integer

Core logic:

```c
digit = temp % 10;
reverse = reverse * 10 + digit;
temp = temp / 10;
```

Example:

```text
1234
```

Step-by-step:

```text
digit = 4, reverse = 4
digit = 3, reverse = 43
digit = 2, reverse = 432
digit = 1, reverse = 4321
```

Negative numbers can be handled by saving the sign:

```c
if (num < 0) {
    sign = -1;
    temp = -num;
}
```

Then applying the sign back:

```c
reverse = reverse * sign;
```

---

## 9. Palindrome Numbers

A palindrome number reads the same forward and backward.

Example:

```text
17271
```

Reverse:

```text
17271
```

So it is a palindrome.

The logic is:

```text
reverse the number
compare reversed number with original number
```

---

## 10. Prime Numbers

A prime number has exactly two positive divisors:

```text
1 and itself
```

Examples:

```text
2, 3, 5, 7, 11
```

Prime checking uses divisibility:

```c
if (n % i == 0) {
    isPrime = 0;
    break;
}
```

The `break` stops the loop early once a divisor is found.

---

## 11. Leap Year Logic

A leap year follows this rule:

```text
divisible by 400 -> leap year
divisible by 100 -> not leap year
divisible by 4   -> leap year
otherwise        -> not leap year
```

This means years like `2000` are leap years, but years like `1900` are not.

---

## 12. Functions

Functions help break programs into reusable pieces.

Example:

```c
int factorial(int n) {
    int result = 1;

    for (int i = 1; i <= n; i++) {
        result = result * i;
    }

    return result;
}
```

### Declaration vs Definition

Function declaration:

```c
int factorial(int n);
```

Function definition:

```c
int factorial(int n) {
    // body
}
```

Declarations tell the compiler the function exists.

Definitions contain the actual logic.

---

## 13. Arrays

An array stores multiple values of the same type.

Example:

```c
int numbers[100];
```

This creates space for 100 integers.

### Array Indexing

C arrays start at index `0`.

For 5 values:

```text
Index:  0  1  2  3  4
Value:  ?  ?  ?  ?  ?
```

So the first value is:

```c
numbers[0]
```

and the fifth value is:

```c
numbers[4]
```

---

## 14. Array Boundary Protection

If we declare:

```c
int numbers[100];
```

valid indexes are:

```text
0 through 99
```

So if the user enters more than 100 values, the program would write outside the array.

That is dangerous.

So we check:

```c
if (n <= 0 || n > 100) {
    printf("Invalid size. Please enter a number between 1 and 100.\n");
    return 1;
}
```

This prevents invalid array sizes.

---

## 15. Array Statistics

The array statistics program calculated:

```text
sum
average
minimum
maximum
```

Core pattern:

```c
sum = 0;
min = numbers[0];
max = numbers[0];

for (i = 0; i < n; i++) {
    sum = sum + numbers[i];

    if (numbers[i] < min) {
        min = numbers[i];
    }

    if (numbers[i] > max) {
        max = numbers[i];
    }
}
```

Average uses casting:

```c
average = (double) sum / n;
```

### Why `(double)` Is Needed

If both `sum` and `n` are integers, C does integer division.

Example:

```text
3 / 2 = 1
```

But:

```c
(double) sum / n
```

forces decimal division:

```text
3.0 / 2 = 1.5
```

---

## 16. Linear Search

Linear search checks each array element one by one.

Example:

```c
for (i = 0; i < n; i++) {
    if (numbers[i] == target) {
        found = 1;
        foundIndex = i;
        break;
    }
}
```

### Mental Model

```text
Start at index 0.
Check each element.
If target is found, stop.
If the loop finishes and target was not found, report not found.
```

A `found` flag can be used:

```c
int found = 0;
```

Meaning:

```text
0 -> not found yet
1 -> found
```

---

## 17. Bubble Sort

Bubble sort arranges an array in order by comparing neighboring elements.

Ascending order example:

```text
Before: 5 2 9 1 3
After:  1 2 3 5 9
```

Core logic:

```c
for (i = 0; i < n - 1; i++) {
    for (j = 0; j < n - 1 - i; j++) {
        if (numbers[j] > numbers[j + 1]) {
            temp = numbers[j];
            numbers[j] = numbers[j + 1];
            numbers[j + 1] = temp;
        }
    }
}
```

### Bubble Sort Mental Model

* The array is one row of numbers.
* `i` counts passes.
* `j` walks through the unsorted part of the array.
* `numbers[j]` and `numbers[j + 1]` are neighboring elements.
* If the left neighbor is bigger than the right neighbor, swap them.
* After each pass, the largest remaining number bubbles to the end.

### Why `i < n - 1`

For `n` elements, bubble sort needs at most `n - 1` passes.

Examples:

```text
1 number  -> 0 passes
2 numbers -> 1 pass
3 numbers -> 2 passes
4 numbers -> 3 passes
5 numbers -> 4 passes
```

So:

```c
for (i = 0; i < n - 1; i++)
```

means:

```text
do the required number of passes
```

### Why `j < n - 1 - i`

`j` compares:

```c
numbers[j]
numbers[j + 1]
```

So `j + 1` must always be a valid index.

For 5 elements, valid indexes are:

```text
0 1 2 3 4
```

The possible neighbor comparisons are:

```text
0 with 1
1 with 2
2 with 3
3 with 4
```

After each pass, the largest remaining value is already fixed at the end, so `j` stops earlier.

---

## 18. Swapping Values

To swap two values safely, use a temporary variable.

```c
temp = a;
a = b;
b = temp;
```

Without `temp`, one value can be overwritten and lost.

Example:

```text
Before:
a = 5
b = 2

After:
a = 2
b = 5
```

This pattern was used in bubble sort.

---

## 19. Common Mistakes Noticed

### Not checking `scanf`

Bad:

```c
scanf("%d", &number);
```

Better:

```c
if (scanf("%d", &number) != 1) {
    printf("Invalid input.\n");
    return 1;
}
```

### Using integer division for average

Bad:

```c
average = sum / n;
```

Better:

```c
average = (double) sum / n;
```

### Forgetting array limits

Bad:

```c
int numbers[100];
// allow user to enter 150 values
```

Better:

```c
if (n <= 0 || n > 100) {
    return 1;
}
```

### Confusing index and position

C index starts at `0`.

Human position usually starts at `1`.

So:

```c
printf("Index: %d\n", foundIndex);
printf("Position: %d\n", foundIndex + 1);
```

### Checking a variable before reading it

Bad:

```c
if (op == '+') {
    scanf("%c", &op);
}
```

Better:

```c
scanf(" %c", &op);

if (op == '+') {
    // use op
}
```

### Forgetting the space before `%c`

When reading a character after another `scanf`, use:

```c
scanf(" %c", &op);
```

The space before `%c` skips leftover whitespace.

---

## 20. Current Input Handling Level

This project mainly uses:

```text
scanf with return-value checking
```

This is acceptable for the foundation level.

However, `scanf` is token-based and does not always read the whole line.

Example:

```text
+2
```

When reading an operator with:

```c
scanf(" %c", &op);
```

C reads only:

```text
+
```

and leaves:

```text
2
```

in the input buffer.

Later, stronger input handling will use:

```text
fgets -> validate string -> convert with strtol/strtod
```

---

## 21. What This Project Built

This project built practical experience with:

* C program structure
* input and output
* variables
* arithmetic
* conditions
* loops
* helper functions
* digit logic
* validation
* arrays
* searching
* sorting
* Git workflow

It is now ready to support deeper projects involving:

* modular C
* pointers
* strings
* memory
* data structures
* systems-level programming