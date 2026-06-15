# Makefile for 00_c_foundations_toolkit
# Builds individual C utility programs from the src/ folder into the build/ folder.

CC = gcc
CFLAGS = -Wall -Wextra -std=c11

SRC_DIR = src
BUILD_DIR = build

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

EXES = $(addprefix $(BUILD_DIR)/,$(addsuffix .exe,$(PROGRAMS)))

all: $(EXES)

# Friendly targets:
# make calculator -> builds build/calculator.exe
$(PROGRAMS): %: $(BUILD_DIR)/%.exe

# Build rule:
# build/calculator.exe depends on src/calculator.c
$(BUILD_DIR)/%.exe: $(SRC_DIR)/%.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) $< -o $@

# Create build directory if it does not exist
$(BUILD_DIR):
	if not exist "$(BUILD_DIR)" mkdir "$(BUILD_DIR)"

clean:
	if exist "$(BUILD_DIR)" rmdir /S /Q "$(BUILD_DIR)"

.PHONY: all clean $(PROGRAMS)