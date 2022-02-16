#include "main.h"

/**
 * _strcmp- compares two strings
 * @s1: input
 * @s2: input
 *Return: value
 */
int _strcmp(char *s1, char *s2)
{
int i, j;
i = 0;
while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'))
{
i++;
}
if ((s1[i] == '\0') && (s2[i] == '\0'))
{
return (0);
}
else
{
if (s1[i] != s2[i])
{
j = s1[i] - s2[i];
return (j);
}
else
return (0);
}
}
