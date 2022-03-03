#include "main.h"

/**
 *
 *
 *
 */
int *array_range(int min, int max)
{
  int i, x, largo;
  int *mal;
  if (min >= max)
    return(NULL);
  largo = (max - min);
  mal = malloc((largo + 1) * sizeof(int));
  if (mal == NULL)
    return (NULL);
  x = 0; 
  for (i = min; i <= max; i++)
    {
      mal[x] = i;
      if (x < largo)
      x++;
    }
  return (mal);
}
