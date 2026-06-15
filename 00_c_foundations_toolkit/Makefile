# Makefile for 00_c_foundations_toolkit
# Builds individual C utility programs from the src/ folder.

CC = gcc
CFLAGS = -Wall -Wextra -std=c11

SRC_DIR = src
BUILD_DIR = build

# Program names
PROGRAMS = calculator \
           prime_checker \
           integer_reversal \
           palindrome_checker \
           armstrong_number \
           multiplication_table \
           array_statistics \
           basic_searching \
           basic_sorting \
           leap_year_checker \
           perfect_number \
           strong_number \
           power_of_base \
           binary_to_decimal \
           fibonacci_series \
           floyd_triangle \
           pyramid_of_stars \
           add_without_plus

# Build all programs
all: $(PROGRAMS)

# Generic rule:
# make calculator builds src/calculator.c into build/calculator.exe
%: $(SRC_DIR)/%.c
	@if not exist $(BUILD_DIR) mkdir $(BUILD_DIR)
	$(CC) $(CFLAGS) $< -o $(BUILD_DIR)/$@.exe

# Remove compiled executables
clean:
	@if exist $(BUILD_DIR) rmdir /S /Q $(BUILD_DIR)

.PHONY: all clean $(PROGRAMS)