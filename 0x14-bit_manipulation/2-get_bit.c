#include "main.h"

/**
 * get_bit - gets bit at given idenx
 * @n: input
 * @index: index
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index > (sizeof(n) * 8))
	return (-1);

n = n >> index;
return (n & 1);
}
