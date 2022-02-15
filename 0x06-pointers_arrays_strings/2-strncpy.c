#include "main.h"

/**
 * _strncopy - concatenates two strings
 * @dest: input 
 * @src : input
 * @n : input
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
  int k;
  for (k = 0; ((k < n) && (src[k] != '\0')); k++)
    dest[k] = src[k];
  while (k < n)
    dest[k++] = '\0';
  return (dest);
}
