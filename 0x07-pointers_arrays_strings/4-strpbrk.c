#include "main.h"

/**
 * _strpbrk: searches string for any of a set of bytes
 * @s: input
 * @accept: input
 * 
 * Return: pointer to byte in s that matches
 */
char *_strpbrk(char *s, char *accept)
{
  int i, j, x;
  char *t;
  x = 0;
  for (i = 0; s[i] != '\0'; i++)
    {
      for (j = 0; accept[j] != '\0'; j++)
	{
	  if (s[i] == accept[j])
	    {
	      x = 1;
	      t = &s[i];
	      break;
	    }
	  if (x == 1)
	    break;
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
