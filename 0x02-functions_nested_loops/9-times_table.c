#include "main.h"


/**
 * times_table -  prints the 9 times table, starting with 0
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
int a, b, aux;

for (a = 0; a <= 8; a++)
{
_putchar('0');
_putchar(',');
if (a == 9)
{
break;
}
_putchar(' ');
_putchar(' ');
}

for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 9; b++)
{
aux = a * b;
if (aux == 0)
{
_putchar('0');
}
else
if (aux / 10 == 0)
{
_putchar(aux + '0');
}
else
{
_putchar(aux / 10  + '0');     
_putchar(aux % 10 + '0');
}
if (aux == a * 9)
{
break;
}
_putchar(',');
_putchar(' ');
_putchar(' ');
}
_putchar('\n');
}
}
