#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: input
 * @n: input
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list a;
unsigned int i;
char *chars;

va_start(a, n);

for (i = 0; i < n; i++)
{
chars = va_arg(a, char *);
if (chars != NULL)
printf("%s", chars);
else
printf("(nil)");
if ((separator != NULL) && (i < n - 1))
printf("%s", separator);
}

va_end(a);

printf("\n");
}
