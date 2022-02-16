#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: input
 * @src : input
 * @n : input
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j, x, k;
x = 0;
for (i = 0; dest[i] != '\0'; i++)
{
}
for (k = 0; src[k] != '\0'; k++)
{
}

if (n > k)
n = k;

for (j = i; x < n; j++)
{
dest[j] = src[x];
x++;
}

return (dest);

}
