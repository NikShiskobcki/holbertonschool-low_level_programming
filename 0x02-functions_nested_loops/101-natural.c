#include <stdio.h>

/**
 * main - entry point
 *
 *
 * Return: 0 always
 */
int main(void)
{
int sum, mul3, mul5;
sum = 0;
mul3 = 3;
mul5 = 5;

while (mul3 <= 1023)
{
sum = sum + mul3;
mul3 = mul3 + 3;
}

while (mul5 <= 1020)
{
sum = sum + mul5;
mul5 = mul5 + 5;
}

printf("%d", sum);
return (0);
}
