# Makefile for 02_arrays_pointers_mastery_lab
# Builds the arrays lab program and its tests.

CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -Iinclude

BUILD_DIR = build

# Detect Windows vs Unix-like systems.
ifeq ($(OS),Windows_NT)
EXE_EXT = .exe
RUN_PREFIX =
MKDIR = if not exist "$(BUILD_DIR)" mkdir "$(BUILD_DIR)"
RM_BUILD = if exist "$(BUILD_DIR)" rmdir /S /Q "$(BUILD_DIR)"
else
EXE_EXT =
RUN_PREFIX = ./
MKDIR = mkdir -p "$(BUILD_DIR)"
RM_BUILD = rm -rf "$(BUILD_DIR)"
endif

ARRAYS_LAB = $(BUILD_DIR)/arrays_lab$(EXE_EXT)
TEST_ARRAY_UTILS = $(BUILD_DIR)/test_array_utils$(EXE_EXT)

.PHONY: all clean arrays_lab test_array_utils test

all: arrays_lab test_array_utils

arrays_lab: $(ARRAYS_LAB)

test_array_utils: $(TEST_ARRAY_UTILS)

$(ARRAYS_LAB): src/arrays_lab_main.c \
                src/phase01_1d_arrays/array_statistics.c \
				src/phase01_1d_arrays/array_reverse.c \
                lib/array_utils.c \
                lib/input_utils.c \
                include/arrays_lab.h \
                include/array_utils.h \
                include/input_utils.h | $(BUILD_DIR)
	$(CC) $(CFLAGS) src/arrays_lab_main.c \
	                 src/phase01_1d_arrays/array_statistics.c \
	                 src/phase01_1d_arrays/array_reverse.c \
	                 lib/array_utils.c \
	                 lib/input_utils.c \
	                 -o $(ARRAYS_LAB)

$(TEST_ARRAY_UTILS): tests/test_array_utils.c \
                     lib/array_utils.c \
                     include/array_utils.h | $(BUILD_DIR)
	$(CC) $(CFLAGS) tests/test_array_utils.c \
	                 lib/array_utils.c \
	                 -o $(TEST_ARRAY_UTILS)

$(BUILD_DIR):
	$(MKDIR)

test: test_array_utils
	$(RUN_PREFIX)$(TEST_ARRAY_UTILS)

clean:
	$(RM_BUILD)