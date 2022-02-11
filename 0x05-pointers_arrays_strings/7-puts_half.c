#include "main.h"

/**
 * puts_half - prints second half of string
 * @str: input
 * Return: Always 0.
 */
void puts_half(char *str)
{
int i, j;
for (i = 0; str[i] != '\0'; i++)
{
}
if (i % 2 != 0)
{
i = ((i) / 2);
}
else
{
i = i / 2;
}
for (j = i; str[j] != '\0'; j++)
_putchar(str[j]);
_putchar('\n');
}
