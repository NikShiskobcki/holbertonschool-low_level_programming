#include "main.h"

/**
 * reverse_array - reverses array
 * @a: input
 *@n: input
 *
 */
void reverse_array(int *a, int n)
{
int arr;
int  x, k;
x = 0;

for (k = n - 1; k > x; k--)
{
arr = a[x];
a[x] = a[k];
a[k] = arr;
x++;
}
}
