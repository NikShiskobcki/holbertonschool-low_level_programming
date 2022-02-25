#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: entry point
 * @argv: entry point
 * Return: 0
 */
int main(int argc, char **argv)
{
int n = -1;
int res, n1, n2;
while (argc--)
n++;

if (n < 2)
{
printf("Error\n");
return (0);
}

n1 = atoi(argv[1]);
n2 = atoi(argv[2]);
res = n1 *n2;

printf("%d\n", res);

return (0);
}
