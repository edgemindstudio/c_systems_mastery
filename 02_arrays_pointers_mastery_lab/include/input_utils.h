// 02_arrays_pointers_mastery_lab/include/input_utils.h

#ifndef INPUT_UTILS_H
#define INPUT_UTILS_H

int read_int(const char *prompt, int *out_value);
int read_int_in_range(const char *prompt, int min_value, int max_value, int *out_value);

#endif