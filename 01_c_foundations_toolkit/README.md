# 01 C Foundations Toolkit

This folder contains beginner-friendly C programs focused on core programming fundamentals: input/output, conditionals, loops, functions, helper functions, digit extraction, validation, and basic problem solving.

These exercises are part of my C systems mastery roadmap and are intended to build a strong foundation before moving into pointers, memory management, data structures, systems programming, and compiler/runtime engineering.

## Programs Completed

| # | Program | File | Main Concepts Practiced |
|---:|---|---|---|
| 1 | Leap Year Checker | `src/leap_year_checker.c` | `if`, `else if`, modulo `%`, logical operators |
| 2 | Prime Number Checker | `src/prime_checker.c` | loops, divisibility, flags, `break` |
| 3 | Perfect Number Checker | `src/perfect_number.c` | divisors, accumulation, loops |
| 4 | Armstrong Number Checker | `src/armstrong_number.c` | digit extraction, helper functions, power function |
| 5 | Palindrome Number Checker | `src/palindrome_checker.c` | reversing numbers, `%`, `/`, comparison |
| 6 | Strong Number Checker | `src/strong_number.c` | factorial function, digit extraction, accumulation |
| 7 | Power of a Number | `src/power_of_base.c` | loops, negative exponents, `double`, validation |
| 8 | Binary to Decimal Converter | `src/binary_to_decimal.c` | binary place value, validation, helper functions |
| 9 | Fibonacci Series | `src/fibonacci_series.c` | sequence generation, shifting variables |
| 10 | Floyd’s Triangle | `src/floyd_triangle.c` | nested loops, number patterns |
| 11 | Pyramid of Stars | `src/pyramid_of_stars.c` | nested loops, spaces, star patterns |
| 12 | Add Without Plus | `src/add_without_plus.c` | increment/decrement logic, handling positive and negative values |
| 13 | Calculator | `src/calculator.c` | arithmetic operations, menu/operation logic |

## Key Skills Practiced

- Writing complete C programs from scratch
- Using `printf` and `scanf`
- Declaring and initializing variables
- Writing `if`, `else if`, and `else` logic
- Using `for` loops and `while` loops
- Working with nested loops
- Using the modulo operator `%`
- Extracting digits from numbers
- Writing helper functions
- Using function prototypes
- Validating user input
- Thinking through edge cases
- Organizing programs into separate source files
- Tracking progress with Git and GitHub

## Compile and Run

From the repository root, compile any file using `gcc`.

Example:

```bash
gcc 01_c_foundations_toolkit/src/leap_year_checker.c -o leap_year_checker
./leap_year_checker