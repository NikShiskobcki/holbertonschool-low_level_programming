#ifndef variadic_funtions
#define variadic_funtions

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
