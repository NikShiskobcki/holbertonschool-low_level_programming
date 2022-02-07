#include "main.h"


/**
 * jack_bauer - prints 24 hours
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
int hh, mm, aux;

for (hh = 00; hh <= 23; hh++)
{
for (mm = 00; mm <= 59; mm++)
{
aux = hh / 10;
_putchar(aux + '0');

aux = hh % 10;
_putchar(aux + '0');

_putchar(':');

aux = mm / 10;
_putchar(aux + '0');

aux = mm % 10;
_putchar(aux + '0');

_putchar('\n');

}

}
}
