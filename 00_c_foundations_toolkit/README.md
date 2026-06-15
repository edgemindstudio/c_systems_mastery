# 00 C Foundations Toolkit

This folder contains beginner-friendly C programs focused on core programming fundamentals: input/output, conditionals, loops, functions, helper functions, digit extraction, validation, arrays, searching, sorting, and basic problem solving.

These exercises are part of my C systems mastery roadmap and are intended to build a strong foundation before moving into modular C, pointers, memory management, data structures, systems programming, and compiler/runtime engineering.

## Project Purpose

The goal of this project is not simply to finish small programs quickly.

The goal is to build fluency in:

* writing complete C programs from scratch
* understanding control flow
* validating basic input
* tracing program behavior
* working with loops and conditions
* processing digits
* using arrays
* implementing beginner algorithms
* compiling and running C programs from the terminal
* organizing work with Git and GitHub

This project acts as the foundation layer for the larger `c_systems_mastery` repository.

## Project Structure

```text
00_c_foundations_toolkit/
├── examples/
├── include/
├── src/
├── tests/
├── .gitkeep
├── Makefile
├── notes.md
└── README.md
```

## Folder Description

| Folder/File | Purpose                                                         |
| ----------- | --------------------------------------------------------------- |
| `src/`      | Contains the C source files for each standalone utility program |
| `include/`  | Reserved for future reusable header files                       |
| `examples/` | Contains sample program runs and expected outputs               |
| `tests/`    | Contains manual test cases for the programs                     |
| `Makefile`  | Provides convenient build commands                              |
| `notes.md`  | Contains learning notes and important concepts                  |
| `README.md` | Documents the project                                           |

## Core Programs Completed

|  # | Program                   | File                         | Main Concepts Practiced                                                         |
| -: | ------------------------- | ---------------------------- | ------------------------------------------------------------------------------- |
|  1 | Calculator                | `src/calculator.c`           | arithmetic operations, `switch`, operator validation, division-by-zero handling |
|  2 | Prime Number Checker      | `src/prime_checker.c`        | loops, divisibility, flags, `break`                                             |
|  3 | Integer Reversal          | `src/integer_reversal.c`     | digit extraction, modulo `%`, integer division                                  |
|  4 | Palindrome Number Checker | `src/palindrome_checker.c`   | reversing numbers, `%`, `/`, comparison                                         |
|  5 | Armstrong Number Checker  | `src/armstrong_number.c`     | digit extraction, helper functions, power function                              |
|  6 | Multiplication Table      | `src/multiplication_table.c` | loops, formatted output                                                         |
|  7 | Array Statistics          | `src/array_statistics.c`     | arrays, sum, average, minimum, maximum                                          |
|  8 | Basic Searching           | `src/basic_searching.c`      | arrays, linear search, flags, indexes                                           |
|  9 | Basic Sorting             | `src/basic_sorting.c`        | arrays, nested loops, bubble sort, swapping                                     |

## Extra Programs Completed

|  # | Program                     | File                      | Main Concepts Practiced                                          |
| -: | --------------------------- | ------------------------- | ---------------------------------------------------------------- |
| 10 | Leap Year Checker           | `src/leap_year_checker.c` | `if`, `else if`, modulo `%`, logical operators                   |
| 11 | Perfect Number Checker      | `src/perfect_number.c`    | divisors, accumulation, loops                                    |
| 12 | Strong Number Checker       | `src/strong_number.c`     | factorial function, digit extraction, accumulation               |
| 13 | Power of a Number           | `src/power_of_base.c`     | loops, negative exponents, `double`, validation                  |
| 14 | Binary to Decimal Converter | `src/binary_to_decimal.c` | binary place value, validation, helper functions                 |
| 15 | Fibonacci Series            | `src/fibonacci_series.c`  | sequence generation, shifting variables                          |
| 16 | Floyd’s Triangle            | `src/floyd_triangle.c`    | nested loops, number patterns                                    |
| 17 | Pyramid of Stars            | `src/pyramid_of_stars.c`  | nested loops, spaces, star patterns                              |
| 18 | Add Without Plus            | `src/add_without_plus.c`  | increment/decrement logic, handling positive and negative values |

## Key Skills Practiced

* Writing complete C programs from scratch
* Using `printf` and `scanf`
* Checking the return value of `scanf`
* Declaring and initializing variables
* Writing `if`, `else if`, and `else` logic
* Using `switch` statements
* Using `for` loops and `while` loops
* Working with nested loops
* Using the modulo operator `%`
* Extracting digits from numbers
* Reconstructing numbers from digits
* Writing helper functions
* Using function prototypes
* Validating user input
* Thinking through edge cases
* Using one-dimensional arrays
* Protecting array boundaries
* Computing sum, average, minimum, and maximum
* Performing linear search
* Performing bubble sort
* Swapping values using a temporary variable
* Organizing programs into separate source files
* Tracking progress with Git and GitHub

## Important Patterns Learned

### 1. Checking `scanf`

Many programs use this pattern:

```c
if (scanf("%d", &number) != 1) {
    printf("Invalid input. Please enter an integer.\n");
    return 1;
}
```

This checks whether `scanf` successfully read the expected input.

### 2. Digit Extraction

Several programs use:

```c
digit = number % 10;
number = number / 10;
```

This pattern is used for:

* reversing an integer
* checking palindromes
* checking Armstrong numbers
* checking strong numbers
* converting binary to decimal

### 3. Array Input

The array programs use:

```c
for (i = 0; i < n; i++) {
    scanf("%d", &numbers[i]);
}
```

C arrays start at index `0`.

For an array of 5 elements:

```text
Index:  0  1  2  3  4
```

### 4. Array Boundary Protection

When using:

```c
int numbers[100];
```

the valid indexes are:

```text
0 through 99
```

So programs must reject sizes greater than 100:

```c
if (n <= 0 || n > 100) {
    printf("Invalid size. Please enter a number between 1 and 100.\n");
    return 1;
}
```

### 5. Linear Search

Linear search checks each element one by one:

```c
for (i = 0; i < n; i++) {
    if (numbers[i] == target) {
        found = 1;
        foundIndex = i;
        break;
    }
}
```

### 6. Bubble Sort

Bubble sort compares neighboring elements and swaps them if they are in the wrong order.

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

Bubble sort mental model:

* `i` counts sorting passes.
* `j` walks through the unsorted part of the array.
* `numbers[j]` and `numbers[j + 1]` are neighboring elements.
* If the left neighbor is greater than the right neighbor, swap them.
* After each pass, the largest remaining value moves to its final position at the end.

## Compile and Run

From the repository root, compile any file using `gcc`.

Example:

```powershell
gcc 00_c_foundations_toolkit\src\leap_year_checker.c -o leap_year_checker.exe
.\leap_year_checker.exe
```

Another example:

```powershell
gcc 00_c_foundations_toolkit\src\basic_sorting.c -o basic_sorting.exe
.\basic_sorting.exe
```

## Example Compile Commands

```powershell
gcc 00_c_foundations_toolkit\src\calculator.c -o calculator.exe
gcc 00_c_foundations_toolkit\src\prime_checker.c -o prime_checker.exe
gcc 00_c_foundations_toolkit\src\integer_reversal.c -o integer_reversal.exe
gcc 00_c_foundations_toolkit\src\palindrome_checker.c -o palindrome_checker.exe
gcc 00_c_foundations_toolkit\src\armstrong_number.c -o armstrong_number.exe
gcc 00_c_foundations_toolkit\src\multiplication_table.c -o multiplication_table.exe
gcc 00_c_foundations_toolkit\src\array_statistics.c -o array_statistics.exe
gcc 00_c_foundations_toolkit\src\basic_searching.c -o basic_searching.exe
gcc 00_c_foundations_toolkit\src\basic_sorting.c -o basic_sorting.exe
```

## Example Program Runs

### Calculator

Input:

```text
Enter first number: 7
Enter operator (+, -, *, /): +
Enter second number: 2
```

Output:

```text
7.00 + 2.00 = 9.00
```

### Integer Reversal

Input:

```text
Enter number: -123
```

Output:

```text
The reverse of the integer -123 is -321
```

### Array Statistics

Input:

```text
How many numbers do you wish to enter?: 5
Enter number 1: 10
Enter number 2: 20
Enter number 3: 5
Enter number 4: 30
Enter number 5: 15
```

Output:

```text
Sum = 80
Average = 16.00
Min = 5
Max = 30
```

### Basic Searching

Input:

```text
How many numbers do you want to enter? 5
Enter number 1: 10
Enter number 2: 20
Enter number 3: 5
Enter number 4: 30
Enter number 5: 15
Enter target number: 30
```

Output:

```text
30 found at index 3
30 found at position 4
```

### Basic Sorting

Input:

```text
How many numbers do you want to enter? 5
Enter number 1: 5
Enter number 2: 2
Enter number 3: 9
Enter number 4: 1
Enter number 5: 3
```

Output:

```text
Original Array: 5 2 9 1 3
Sorted Array:   1 2 3 5 9
```

## Current Input Handling Level

Most programs use `scanf` with return-value checking.

This is acceptable for this foundation level.

Later projects will introduce stronger input handling using:

```text
fgets -> validate string -> convert safely
```

That will allow better handling of edge cases such as:

* words instead of numbers
* numbers mixed with letters
* spaced input
* overly large input
* empty input

## What This Project Demonstrates

This project demonstrates that I can:

* write standalone C programs
* solve beginner programming problems in C
* use variables and data types
* use arithmetic operators
* use conditionals
* use loops
* write helper functions
* process digits
* use arrays
* search arrays
* sort arrays
* validate basic input
* compile and run programs from the terminal
* organize beginner C utilities in a structured project folder
* track progress with Git and GitHub

## Status

Core foundation toolkit: **Completed**

Next project areas:

* Modular C with functions and headers
* Arrays and pointers mastery
* Strings and buffers
* Data structures
* Systems programming foundations
