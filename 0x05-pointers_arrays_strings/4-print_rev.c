#include "main.h"

/**
 * print_rev - prints string reversed
 * @s: input
 * Return: Always 0.
 */
void print_rev(char *s)
{
int i, k;

for (i = 0; s[i] != '\0'; i++)
{
}

for (k = i-1; k >= 0; k--)
_putchar(s[k]);
_putchar('\n');
}
