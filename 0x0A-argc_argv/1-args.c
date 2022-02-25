#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @argc: input
 * @argv: input
 * Return: 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
int n = -1;
while (argc--)
n++;
printf("%d\n", n);

return (0);
}
