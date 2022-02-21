#include "main.h"

/**
 * print_diagsums - prints sum of the two diagonals
 * @a: input
 *@size: input
 */
void print_diagsums(int *a, int size)
{
int i, j, sum1, sum2;
sum1 = 0;
sum2 = 0;

for (i = 0; i < size; i++)
{
sum1 = sum1 + a[i];
a = a + size;
}
a = a - size;
for (j = size; j > 0; j--)
{
sum2 = sum2 + a[j];
a = a - size;
}
printf("%d , %d\n", sum1, sum2);
}
