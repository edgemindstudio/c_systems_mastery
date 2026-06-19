## Exercise 1: Array Statistics

Implemented modular array statistics using:

- `input_utils.c` for safe integer input with `fgets` and `strtol`
- `array_utils.c` for reusable array operations
- `array_statistics.c` as the feature runner
- `arrays_lab_main.c` as the program entry point
- `test_array_utils.c` for basic validation

Key lessons:
- Arrays store same-type values contiguously.
- Valid indexes run from `0` to `n - 1`.
- `min` and `max` should be initialized from real array data, not `0`.
- `fgets + strtol` is safer than plain `scanf`.
- `main()` should coordinate; reusable logic should live in library functions.