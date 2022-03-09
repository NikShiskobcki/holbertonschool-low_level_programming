#include "function_pointers.h"

/**
 * int_index - entry
 * @array: input
 * @size: input
 * @cmp: input
 * Return: i; -1 if fail
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i, flag;
flag = -1;
if (size <= 0)
return (-1);

if ((array == NULL) || (cmp == NULL))
return (-1);

for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
flag = i;
if (flag == i)
return (i);
}
return (-1);
}
