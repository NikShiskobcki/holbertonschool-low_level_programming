#include "search_algos.h"
/**
 *linear_search - linear search
 * @array: array
 * @size: size
 * @value: value
 * Return: int
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;
	for (i = 0; i < size; i++)
		if (array[i] == value)
			return i;
	return -1;
}