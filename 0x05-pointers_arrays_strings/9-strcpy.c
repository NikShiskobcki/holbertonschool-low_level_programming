#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - prints string and reverses it
 * @s: input
 *
 */
char *_strcpy(char *dest, char *src)
{
int i, n, j;
i = (_strlen(src));
if (i > 0)
{
for (n = 0; n <= i; n++, j++)
{
dest[j] = src[n];
}
}
return(dest); 
}
