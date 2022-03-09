#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry
 * @argc: input
 * @argv: input
 * Return: 0
 */
int main(int argc, char *argv[])
{
int a, b;
if (argc != 4)
{
printf("Error\n");
exit(98);
}

a = atoi(argv[1]);
b = atoi(argv[3]);

if (get_op_func(argv[2]) == NULL)
{
printf("Error");
exit(99);
}

printf("%d\n", get_op_func(argv[2])(a, b));
return (0);
}
