#include "main.h"

/**
 * string_toupper - change all lowercase to upper
 *
 * @a: input
 * Return: a
 */
char *string_toupper(char *a)
{
int i, x;

for (i = 0; a[i] != '\0'; i++)
{
x = a[i];
if ((x >= 'a') && (x <= 'z'))
{
x = x - 32;
a[i] = x;
}
}
return (a);
}
