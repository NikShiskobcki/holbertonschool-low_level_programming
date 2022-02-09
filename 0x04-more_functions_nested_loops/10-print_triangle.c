#include "main.h"

/**
 *print_triangle - prints triangle
 *@size: input
 */
void print_triangle(int size)
{
int i, n, k;
k = size;
if (size > 0)
{
for (n = 1; n <= size; n++)
{
for (i = 1; i <= size; i++)
{
if (i >= k)
_putchar('#');
else
_putchar(' ');
}
_putchar('\n');
k = k - 1;
}
}
else
_putchar('\n');
}
