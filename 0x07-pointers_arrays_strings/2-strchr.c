#include "main.h"

/**
 * _strchr: locates a char in a string
 * @c: input
 * Return: c or NULL
 */
char *_strchr(char *s, char c)
{
 
  while (*s != c && *s != '\0')
    s++;
  if (c != '\0' && *s == '\0')
    return ('\0');
  else
    return (s);
  
}
