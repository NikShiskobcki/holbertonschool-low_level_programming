#ifndef variadic_funtions
#define variadic_funtions

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * format - Struct format
 *
 * @form: The operator
 * @f: The function associated
 */
typedef struct format
{
  char *form;
  void (*f)(va_list);
} format_t;

void print_c(va_list c);
void print_i(va_list i);
void print_f(va_list f);
void print_s(va_list s);


int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
