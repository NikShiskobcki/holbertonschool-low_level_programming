#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * print_to_98 - computes the absolute value of an integer
 * @n: input creo
 * Return: 0 always
 */
void print_to_98(int n)
{
if (n <= 98)
{
for (n = n; n <= 98; n++)
{
printf("%d", n);
if (n != 98)
{
printf("%c", ',');
printf("%c", ' ');
}
else
{
putchar(10);
}
}
}
else
{
for (n = n; n >= 98; n--)
{
printf("%d", n);
if (n != 98)
{
printf("%c", ',');
printf("%c", ' ');
}
else
{
putchar(10);
}
}
}
}
