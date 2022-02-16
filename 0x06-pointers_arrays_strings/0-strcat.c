#include "main.h"

/**
 * _strcat - appends the src string to the dest string
 * @dest: input
 *@src: input
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
int i, j, x;
x = 0;
for (i = 0; dest[i] != '\0'; i++)
{
}

for (j = i; src[x] != '\0'; j++)
{
dest[j] = src[x];
x++;
}
j++;
dest[j] = '\0';

return (dest);
}
