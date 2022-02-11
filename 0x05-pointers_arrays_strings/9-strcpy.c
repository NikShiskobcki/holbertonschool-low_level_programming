#include "main.h"
#include "2-strlen.c"

/**
 * _strcpy - prints string and reverses it
 * @dest: input
 * @src: input
 */
char *_strcpy(char *dest, char *src)
{
int i, n;
char str;
i = (_strlen(src) - 1);
if (i > 0)
{
for (n = 0; n <= i; n++)
{
str = src[n];
dest[n] = str;
}
}
return (dest); 
}
