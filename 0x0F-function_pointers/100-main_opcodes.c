#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcodes
 * @argc: num of arg
 * @argv: array of args
 *
 * Return: 0 on Success
 */
int main(int argc, char *argv[])
{
  int i, j;
char *array;

if (argc != 2)
{
printf("Error\n");
exit(1);
}
j = atoi(argv[1]);
if (j < 0)
{
printf("Error\n");
exit(2);
}
array = (char *)main;
for (i = 0; i < j; i++)
{
if (i == j - 1)
{
printf("%02hhx\n", array[i]);
break;
}
printf("%02hhx ", array[i]);
}
return (0);
}
