#include "main.h"

/**
 * clear_bit - sets bit to 1 at given index
 * @n: input
 * @index: input
 * Return: 1
 *
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int i = 0;

	if (index > (sizeof(n) * 8))
		return (-1);
	i = i << index;
	*n = i | *n;
	return (1);
}
