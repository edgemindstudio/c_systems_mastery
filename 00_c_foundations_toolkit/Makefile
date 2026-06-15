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

ifeq ($(OS),Windows_NT)
EXE_EXT = .exe
MKDIR = if not exist "$(BUILD_DIR)" mkdir "$(BUILD_DIR)"
RMDIR = if exist "$(BUILD_DIR)" rmdir /S /Q "$(BUILD_DIR)"
else
EXE_EXT =
MKDIR = mkdir -p "$(BUILD_DIR)"
RMDIR = rm -rf "$(BUILD_DIR)"
endif

EXES = $(addprefix $(BUILD_DIR)/,$(addsuffix $(EXE_EXT),$(PROGRAMS)))

all: $(EXES)

# Friendly targets:
# make calculator -> builds build/calculator or build/calculator.exe
$(PROGRAMS): %: $(BUILD_DIR)/%$(EXE_EXT)

# Build rule:
# build/calculator or build/calculator.exe depends on src/calculator.c
$(BUILD_DIR)/%$(EXE_EXT): $(SRC_DIR)/%.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) $< -o $@

# Create build directory if it does not exist
$(BUILD_DIR):
	$(MKDIR)

clean:
	$(RMDIR)

.PHONY: all clean $(PROGRAMS)