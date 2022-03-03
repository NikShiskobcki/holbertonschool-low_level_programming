#include "main.h"
#include <limits.h>
/**
 * malloc_checked - main
 * @b: input
 * Return: mal
 */
void *malloc_checked(unsigned int b)
{
void *mal = malloc(b);

if (mal == NULL)
exit(98);
return (mal);
}
