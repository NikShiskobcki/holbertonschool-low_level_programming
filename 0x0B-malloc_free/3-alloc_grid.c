#include "main.h"

/**
 * alloc_grid - main
 * @width: input
 * @height: input
 * Return: grid
 */
int **alloc_grid(int width, int height)
{
int w, i;
int **res;

if ((width <= 0) || (height <= 0))
return (NULL);

res = malloc(height * sizeof(int *));

if (res == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
res[i] = malloc(width * sizeof(int));
if (res[i] == NULL)
{
for (i = i - 1; i >= 0; i--)
free(res[i]);
free(res);
return (NULL);
}
else
{
for (w = 0; w < width; w++)
{
res[i][w] = 0;
}
}
}
return (res);
}
