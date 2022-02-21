#include "main.h"

/**
 * _strstr - locates substring
 * @haystack: input
 * @needle: input
 * 
 * Return: pointer to begining of substring or null
 */
char *_strstr(char *haystack, char *needle)
{
  int i, j, flag, x;
  char *f;

  for (i = 0; haystack[i] != '\0'; i++)
    {
      if (haystack[i] != needle[0])
	{
	  flag = 0;
	  continue;
	}
      else
	{
	  f = &haystack[i];
	  x = 0;
	  for (j = i; haystack[j] != '\0'; j++)
	    {
	      if (needle[x] == '\0')
		break;
	      else
		{
	      if (haystack[j] != needle[x])
		{
		  flag = 0;
		  break;
		}
	      else
		{
		  flag = 1;
		  if (needle[x] != '\0')
		    x++;
		 
		}
		}
	    }
	  if (flag == 1)
	    break;

	}

      if (flag == 1)
	break;
    }
  if (flag == 1)
    return (f);
  else
    return ('\0');
 
}
