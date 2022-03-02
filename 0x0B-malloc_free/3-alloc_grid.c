#include "main.h"

/**
 * alloc_grid - main
 * @width: input
 * @height: input
 */
int **alloc_grid(int width, int height)
{
  int i, j;
  int **res;
  if ((width <= 0) || (height <= 0))
    return (NULL);

  res = malloc(height * sizeof(int));

  if (res == NULL)
    return (NULL);

  for (i = 0; i < height; i++)
    {
  res[i] = malloc(width * sizeof(int));
  if (res[i] == NULL)
    {
      free(res);
      return (NULL);
    }
  else
    {
      for (j = 0; j < width; j++)
	{
	  res[i][j] = 0;
	}
    }
    }

  return (res);
}
