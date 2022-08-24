#include "search_algos.h"
/**
 *binary_search- binary search
 *@array: array
 *@size: size
 *@value:value
 *Return: int
 */
int binary_search(int *array, size_t size, int value)
{
	size_t first, last, x;

	if (array == NULL)
		return (-1);
	for (first = 0, last = size - 1; last >= first;)
	{
		printf("Searching in array: ");
		for (x = first; x < last; x++)
			printf("%d, ", array[x]);
		printf("%d\n", array[x]);
		x = first + (last - first) / 2;
		if (array[x] == value)
			return (x);
		if (array[x] > value)
			last = x - 1;
		else
			first = x + 1;
	}
	return (-1);
}
