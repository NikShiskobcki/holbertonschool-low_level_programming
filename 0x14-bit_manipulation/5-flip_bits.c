#include "main.h"

/**
 * flip_bits - flip bits
 * @n: input
 * @m: input
 * Return: amount of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int x = 0;
int bitM;
int bitN;

	while (n > 0 || m > 0)
	{
		bitM = m & 1;
		bitN = n & 1;
		if (bitN != bitM)
			x++;
		n = n >> 1;
		m = m >> 1;
	}

	return (x);
}
