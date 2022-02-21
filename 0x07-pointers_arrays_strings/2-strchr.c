#include "main.h"

/**
 * _strchr: locates a char in a string
 * @c: input
 * Return: c or NULL
 */
char *_strchr(char *s, char c)
{
  int i, x;
  char *t;

  x = 0;
  for (i = 0; s[i] != '\0'; i++)
    {
     
      if (s[i] == c)
	{
	  x = 1;
	  t = &s[i];
	}
      
      if (x == 1)
	break;
    }
  if (x == 0)
    return (NULL);
  else 
    {
      return(t);
    }
  
}
