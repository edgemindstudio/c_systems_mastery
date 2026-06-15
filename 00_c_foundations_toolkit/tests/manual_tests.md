# C Foundations Toolkit Manual Tests

This file contains manual test cases for the programs in `00_c_foundations_toolkit`.

The goal is to check normal inputs, edge cases, invalid inputs, and expected behavior.

---

## 1. Calculator

Program:

```text
src/calculator.c
```

Compile:

```powershell
gcc 00_c_foundations_toolkit\src\calculator.c -o calculator.exe
.\calculator.exe
```

### Test 1: Addition

Input:

```text
7
+
2
```

Expected output:

```text
7.00 + 2.00 = 9.00
```

### Test 2: Subtraction

Input:

```text
10
-
4
```

Expected output:

```text
10.00 - 4.00 = 6.00
```

### Test 3: Multiplication

Input:

```text
6
*
5
```

Expected output:

```text
6.00 * 5.00 = 30.00
```

### Test 4: Division

Input:

```text
10
/
2
```

Expected output:

```text
10.00 / 2.00 = 5.00
```

### Test 5: Division by zero

Input:

```text
10
/
0
```

Expected output:

```text
Error: division by zero
```

### Test 6: Invalid operator

Input:

```text
10
%
5
```

Expected output:

```text
Invalid operator. Operator must be one of these: +, -, *, /
```

### Test 7: Invalid first number

Input:

```text
hello
```

Expected output:

```text
Invalid input. Please enter number.
```

---

## 2. Integer Reversal

Program:

```text
src/integer_reversal.c
```

Compile:

```powershell
gcc 00_c_foundations_toolkit\src\integer_reversal.c -o integer_reversal.exe
.\integer_reversal.exe
```

### Test 1: Positive number

Input:

```text
1234
```

Expected output:

```text
The reverse of the integer 1234 is 4321
```

### Test 2: Number with trailing zeros

Input:

```text
1000
```

Expected output:

```text
The reverse of the integer 1000 is 1
```

### Test 3: Negative number

Input:

```text
-123
```

Expected output:

```text
The reverse of the integer -123 is -321
```

### Test 4: Zero

Input:

```text
0
```

Expected output:

```text
The reverse of the integer 0 is 0
```

### Test 5: Invalid input

Input:

```text
hello
```

Expected output:

```text
Invalid input. Please enter an integer.
```

---

## 3. Multiplication Table

Program:

```text
src/multiplication_table.c
```

Compile:

```powershell
gcc 00_c_foundations_toolkit\src\multiplication_table.c -o multiplication_table.exe
.\multiplication_table.exe
```

### Test 1: Positive number

Input:

```text
5
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

### Test 2: Zero

Input:

```text
0
```

Expected output:

```text
0 x 1 = 0
0 x 2 = 0
0 x 3 = 0
0 x 4 = 0
0 x 5 = 0
0 x 6 = 0
0 x 7 = 0
0 x 8 = 0
0 x 9 = 0
0 x 10 = 0
0 x 11 = 0
0 x 12 = 0
```

### Test 3: Negative number

Input:

```text
-3
```

Expected behavior:

```text
The program should print the multiplication table for -3 from 1 to 12.
```

### Test 4: Invalid input

Input:

```text
hello
```

Expected output:

```text
Invalid input. Please enter an integer.
```

---

## 4. Array Statistics

Program:

```text
src/array_statistics.c
```

Compile:

```powershell
gcc 00_c_foundations_toolkit\src\array_statistics.c -o array_statistics.exe
.\array_statistics.exe
```

### Test 1: Normal values

Input:

```text
5
10
20
5
30
15
```

Expected output:

```text
Sum = 80
Average = 16.00
Min = 5
Max = 30
```

### Test 2: Single value

Input:

```text
1
7
```

Expected output:

```text
Sum = 7
Average = 7.00
Min = 7
Max = 7
```

### Test 3: Negative values

Input:

```text
4
-5
-10
0
8
```

Expected output:

```text
Sum = -7
Average = -1.75
Min = -10
Max = 8
```

### Test 4: Invalid size zero

Input:

```text
0
```

Expected output:

```text
Invalid size. Please enter a number between 1 and 100.
```

### Test 5: Invalid size above limit

Input:

```text
101
```

Expected output:

```text
Invalid size. Please enter a number between 1 and 100.
```

### Test 6: Invalid number input

Input:

```text
3
10
hello
```

Expected output:

```text
Error: Invalid integer
```

---

## 5. Basic Searching

Program:

```text
src/basic_searching.c
```

Compile:

```powershell
gcc 00_c_foundations_toolkit\src\basic_searching.c -o basic_searching.exe
.\basic_searching.exe
```

### Test 1: Target found

Input:

```text
5
10
20
5
30
15
30
```

Expected output:

```text
30 found at index 3
30 found at position 4
```

### Test 2: Target not found

Input:

```text
5
10
20
5
30
15
99
```

Expected output:

```text
99 was not found
```

### Test 3: Single-element array, found

Input:

```text
1
7
7
```

Expected output:

```text
7 found at index 0
7 found at position 1
```

### Test 4: Negative target

Input:

```text
4
-3
0
8
-10
-10
```

Expected output:

```text
-10 found at index 3
-10 found at position 4
```

### Test 5: Invalid size

Input:

```text
0
```

Expected output:

```text
Invalid size. Please enter a number between 1 and 100.
```

### Test 6: Invalid input

Input:

```text
hello
```

Expected output:

```text
Invalid input. Please enter an integer.
```

---

## 6. Basic Sorting

Program:

```text
src/basic_sorting.c
```

Compile:

```powershell
gcc 00_c_foundations_toolkit\src\basic_sorting.c -o basic_sorting.exe
.\basic_sorting.exe
```

### Test 1: Unsorted values

Input:

```text
5
5
2
9
1
3
```

Expected output:

```text
Original Array: 5 2 9 1 3
Sorted Array:   1 2 3 5 9
```

### Test 2: Already sorted values

Input:

```text
5
1
2
3
4
5
```

Expected output:

```text
Original Array: 1 2 3 4 5
Sorted Array:   1 2 3 4 5
```

### Test 3: Reverse sorted values

Input:

```text
5
5
4
3
2
1
```

Expected output:

```text
Original Array: 5 4 3 2 1
Sorted Array:   1 2 3 4 5
```

### Test 4: Duplicate values

Input:

```text
6
3
3
1
2
3
1
```

Expected output:

```text
Original Array: 3 3 1 2 3 1
Sorted Array:   1 1 2 3 3 3
```

### Test 5: Single value

Input:

```text
1
7
```

Expected output:

```text
Original Array: 7
Sorted Array:   7
```

### Test 6: Invalid size

Input:

```text
101
```

Expected output:

```text
Invalid size. Please enter a number between 1 and 100.
```

---

## 7. Prime Checker

Program:

```text
src/prime_checker.c
```

Compile:

```powershell
gcc 00_c_foundations_toolkit\src\prime_checker.c -o prime_checker.exe
.\prime_checker.exe
```

### Test 1: Prime number

Input:

```text
7
```

Expected behavior:

```text
Program should report that 7 is prime.
```

### Test 2: Non-prime number

Input:

```text
12
```

Expected behavior:

```text
Program should report that 12 is not prime.
```

### Test 3: Edge case 1

Input:

```text
1
```

Expected behavior:

```text
Program should report that 1 is not prime.
```

### Test 4: Edge case 2

Input:

```text
2
```

Expected behavior:

```text
Program should report that 2 is prime.
```

---

## 8. Palindrome Checker

Program:

```text
src/palindrome_checker.c
```

Compile:

```powershell
gcc 00_c_foundations_toolkit\src\palindrome_checker.c -o palindrome_checker.exe
.\palindrome_checker.exe
```

### Test 1: Palindrome number

Input:

```text
17271
```

Expected behavior:

```text
Program should report that 17271 is a palindrome.
```

### Test 2: Non-palindrome number

Input:

```text
1234
```

Expected behavior:

```text
Program should report that 1234 is not a palindrome.
```

### Test 3: Single digit

Input:

```text
7
```

Expected behavior:

```text
Program should report that 7 is a palindrome.
```

---

## 9. Armstrong Number Checker

Program:

```text
src/armstrong_number.c
```

Compile:

```powershell
gcc 00_c_foundations_toolkit\src\armstrong_number.c -o armstrong_number.exe
.\armstrong_number.exe
```

### Test 1: Armstrong number

Input:

```text
153
```

Expected behavior:

```text
Program should report that 153 is an Armstrong number.
```

### Test 2: Another Armstrong number

Input:

```text
9474
```

Expected behavior:

```text
Program should report that 9474 is an Armstrong number.
```

### Test 3: Non-Armstrong number

Input:

```text
123
```

Expected behavior:

```text
Program should report that 123 is not an Armstrong number.
```

---

## 10. General Testing Notes

These tests are manual tests.

At this stage, the programs are interactive and use `scanf`, so testing is done by compiling each program and entering values manually.

Later, stronger testing can be added using:

* input redirection
* shell scripts
* automated test runners
* refactoring logic into functions
* unit tests

For now, these manual tests are enough for the foundation level.