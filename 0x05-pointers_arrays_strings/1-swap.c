#include "main.h"

/**
 * swap_int - swaps the value of two integers
 *@a: input
 *@b: input
 */
void swap_int(int *a, int *b)
{
int i, j;
i = *a;
j = *b;
*a = j;
*b = i;
}
