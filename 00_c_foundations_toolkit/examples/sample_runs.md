# C Foundations Toolkit Sample Runs

This file contains example runs for selected programs in the `00_c_foundations_toolkit` project.

These examples show typical inputs and expected outputs.

---

## Calculator

Program:

```text
src/calculator.c
```

Example input:

```text
Simple Calculator
Enter first number: 7
Enter operator (+, -, *, /): +
Enter second number: 2
```

Expected output:

```text
7.00 + 2.00 = 9.00
```

Division by zero example:

```text
Simple Calculator
Enter first number: 10
Enter operator (+, -, *, /): /
Enter second number: 0
```

Expected output:

```text
Error: division by zero
```

Invalid operator example:

```text
Simple Calculator
Enter first number: 10
Enter operator (+, -, *, /): %
```

Expected output:

```text
Invalid operator. Operator must be one of these: +, -, *, /
```

---

## Integer Reversal

Program:

```text
src/integer_reversal.c
```

Example input:

```text
Enter number: 1234
```

Expected output:

```text
The reverse of the integer 1234 is 4321
```

Negative number example:

```text
Enter number: -123
```

Expected output:

```text
The reverse of the integer -123 is -321
```

Trailing zero example:

```text
Enter number: 1000
```

Expected output:

```text
The reverse of the integer 1000 is 1
```

---

## Multiplication Table

Program:

```text
src/multiplication_table.c
```

Example input:

```text
Enter number: 5
```

Expected output:

```text
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
5 x 4 = 20
5 x 5 = 25
5 x 6 = 30
5 x 7 = 35
5 x 8 = 40
5 x 9 = 45
5 x 10 = 50
5 x 11 = 55
5 x 12 = 60
```

---

## Array Statistics

Program:

```text
src/array_statistics.c
```

Example input:

```text
How many numbers you wish to enter?: 5
Enter number 1: 10
Enter number 2: 20
Enter number 3: 5
Enter number 4: 30
Enter number 5: 15
```

Expected output:

```text
Sum = 80
Average = 16.00
Min = 5
Max = 30
```

Single-value example:

```text
How many numbers you wish to enter?: 1
Enter number 1: 7
```

Expected output:

```text
Sum = 7
Average = 7.00
Min = 7
Max = 7
```

Negative values example:

```text
How many numbers you wish to enter?: 4
Enter number 1: -5
Enter number 2: -10
Enter number 3: 0
Enter number 4: 8
```

Expected output:

```text
Sum = -7
Average = -1.75
Min = -10
Max = 8
```

---

## Basic Searching

Program:

```text
src/basic_searching.c
```

Example input:

```text
Linear Search Program
How many numbers do you want to enter? 5
Enter number 1: 10
Enter number 2: 20
Enter number 3: 5
Enter number 4: 30
Enter number 5: 15
Enter target number: 30
```

Expected output:

```text
30 found at index 3
30 found at position 4
```

Target not found example:

```text
Linear Search Program
How many numbers do you want to enter? 5
Enter number 1: 10
Enter number 2: 20
Enter number 3: 5
Enter number 4: 30
Enter number 5: 15
Enter target number: 99
```

Expected output:

```text
99 was not found
```

---

## Basic Sorting

Program:

```text
src/basic_sorting.c
```

Example input:

```text
Basic Sorting Program
How many numbers do you want to enter? 5
Enter number 1: 5
Enter number 2: 2
Enter number 3: 9
Enter number 4: 1
Enter number 5: 3
```

Expected output:

```text
Original Array: 5 2 9 1 3
Sorted Array:   1 2 3 5 9
```

Already sorted example:

```text
Basic Sorting Program
How many numbers do you want to enter? 5
Enter number 1: 1
Enter number 2: 2
Enter number 3: 3
Enter number 4: 4
Enter number 5: 5
```

Expected output:

```text
Original Array: 1 2 3 4 5
Sorted Array:   1 2 3 4 5
```

Reverse sorted example:

```text
Basic Sorting Program
How many numbers do you want to enter? 5
Enter number 1: 5
Enter number 2: 4
Enter number 3: 3
Enter number 4: 2
Enter number 5: 1
```

Expected output:

```text
Original Array: 5 4 3 2 1
Sorted Array:   1 2 3 4 5
```

Duplicate values example:

```text
Basic Sorting Program
How many numbers do you want to enter? 6
Enter number 1: 3
Enter number 2: 3
Enter number 3: 1
Enter number 4: 2
Enter number 5: 3
Enter number 6: 1
```

Expected output:

```text
Original Array: 3 3 1 2 3 1
Sorted Array:   1 1 2 3 3 3
```

---

## Prime Checker

Program:

```text
src/prime_checker.c
```

Example input:

```text
Enter number: 7
```

Expected output:

```text
7 is a prime number
```

Non-prime example:

```text
Enter number: 12
```

Expected output:

```text
12 is not a prime number
```

---

## Palindrome Checker

Program:

```text
src/palindrome_checker.c
```

Example input:

```text
Enter number: 17271
```

Expected output:

```text
17271 is a palindrome
```

Non-palindrome example:

```text
Enter number: 1234
```

Expected output:

```text
1234 is not a palindrome
```

---

## Armstrong Number Checker

Program:

```text
src/armstrong_number.c
```

Example input:

```text
Enter number: 153
```

Expected output:

```text
153 is an Armstrong number
```

Non-Armstrong example:

```text
Enter number: 123
```

Expected output:

```text
123 is not an Armstrong number
```

---

## Notes

The exact wording of prompts or output may differ slightly depending on the current source code.

The purpose of these examples is to document the expected behavior and important test cases for the programs.
