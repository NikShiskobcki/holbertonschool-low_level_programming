#include "main.h"

/**
 * create_array - entry point
 * @size: input
 * @c: input
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
char *ar;
unsigned int i;
if (size == 0)
return (NULL);

ar = malloc(size);

for (i = 0; i < size; i++)
ar[i] = c;

return (0);
}
