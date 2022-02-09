#include "main.h"

/**
 * print_square - prints square
 *@size: input
 */
void print_square(int size)
{
int i, n;
if (size > 0)
{
for (n = 1; n <= size; n++)
{
for (i = 1; i <= size; i++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
_putchar('\n');
}
