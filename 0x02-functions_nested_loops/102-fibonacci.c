#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
long int fibo = 1;
long int prev = 1;
long int aux;
int i = 1;
printf("%ld, ", fibo);
fibo = 2;
while (i < 49)
{
printf("%ld, ", fibo);
aux = fibo;
fibo = fibo + prev;
prev = aux;
i++;
}
printf("%ld\n", fibo);
return (0);
}
