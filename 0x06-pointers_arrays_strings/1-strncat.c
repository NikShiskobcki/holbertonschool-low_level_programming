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
  int i, j, x;
  x = 0;
  for (i = 0; dest[i] != '\0'; i++)
    {
    }
  if (src[x] != '\0')
    {
  for (j = i; x < n; j++)
    {
      dest[j] = src[x];
      x++;
    }
    }
  return (dest);

}
