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

  if (needle[0] == '\0')
    return (haystack);
  
  for (i = 0; haystack[i] != '\0'; i++)
    {
      if (haystack[i] != '\0')
	{
	  if (haystack[i] == needle[0])
	    {
	 
	      f = &haystack[i];
	      x = 1;
	      for (j = i + 1; haystack[j] != '\0'; j++)
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
	  else
	    flag = 0;
       
	}
     

      
      
      if (flag == 1)
	break;
    }
  if (flag == 0)
    return ('\0');
  else
    return (f);

}
