#include "main.h"

/**
 * _puts_recursion - prints string
 * @s: input
 *
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}

_putchar(*s);
s++;
_puts_recursion(s);

}
