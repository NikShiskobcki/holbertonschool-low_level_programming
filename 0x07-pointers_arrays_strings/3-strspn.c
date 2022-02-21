#include "main.h"

/**
 * _strspn - gets lenght of a prefix substring
 * @s: input
 * @accept: input
 *
 * Return: num of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int cont;
int i, j, k;
k = 0;
cont = 0;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
cont++;
k = 1;
break;
}
else
k = 0;
}
if (k == 0)
break;
}
return (cont);

}
