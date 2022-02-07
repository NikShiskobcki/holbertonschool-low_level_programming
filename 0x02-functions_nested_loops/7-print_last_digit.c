#include "main.h"

/**
 * print_last_digit - prints last digit
 * @j: input creo
 * Return: j always
 */
int print_last_digit(int j)
{
j = j % 10;
if (j < 0)
{
j = -j;
}

_putchar(j + '0');
return (j);

}
