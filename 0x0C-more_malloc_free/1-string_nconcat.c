#include "main.h"

/**
 * string_nconcat - main
 * @s1: input
 * @s2: input
 * @n: input
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int size1 = 0, size2 = 0, i, j;
  char *res;
  if (s1 == NULL && s2 == NULL)
    {
      res = malloc(1 * sizeof(char));
      res[0] = '\0';
      return (res);
    }

  if (s1 != NULL)
    {
      for (size1 = 0; s1[size1] != '\0'; size1++)
	{
	}
    }

  if (s2 != NULL)
    {
      for (size2 = 0; s2[size2] != '\0'; size2++)
	{
	}
    }
  
      if (n > size2)
	n = size2;

      res = malloc((size1 + n + 1) * sizeof(char));
      if (res == NULL)
	return (NULL);
      
  for (i = 0; i < size1; i++)
    {
      res[i] = s1[i];
    }
  
  for (j = 0; j <= n; i++, j++)
    {
      res[i] = s2[j];
    }
  res[i] = '\0';
  return (res);
}
