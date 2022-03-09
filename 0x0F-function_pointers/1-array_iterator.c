#include "function_pointers.h"

/**
 * array_iterator - entry
 * @array: input
 * @size: input
 * @action: input
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned long int i;
if ((size > 0) && (action != NULL))
{
if (array != NULL)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
}
