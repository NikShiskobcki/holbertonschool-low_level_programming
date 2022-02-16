#include "main.h"

/**
 * rot13- encodes in rot13
 * @r: input
 * Return: encoded
 */
char *rot13(char *r)
{
int i, j;

char a_z[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; r[i] != '\0'; i++)
{
if (((r[i] >= 'A') && (r[i] <= 'Z')) || ((r[i] >= 'a') && (r[i] <= 'z')))
{
j = 0;
while (a_z[j] != r[i])
{
j++;
}
r[i] = rot[j];
}
}
return (r);
}
