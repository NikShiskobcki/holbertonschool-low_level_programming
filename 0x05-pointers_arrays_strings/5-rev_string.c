#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - prints string and reverses it
 * @s: input
 *
 */
void rev_string(char *s)
{
int i, n;
char str;
i = (_strlen(s) - 1);
for (n = 0; n <= i; n++, i--)
{
str = s[n];
s[n] = s[i];
s[i] = str;
}
}
