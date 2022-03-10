#include "variadic_functions.h"

/**
 * sum_them_all - sums all args
 * @n: input
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
int res;
va_list a;
unsigned int i;
if (n == 0)
return (0);
res = 0;
va_start(a, n);

for (i = 0; i < n; i++)
{
res += va_arg(a, int);
}
va_end(a);

return (res);
}
