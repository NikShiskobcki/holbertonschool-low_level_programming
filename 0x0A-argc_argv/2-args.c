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
while (argc--)
printf("%s\n", *argv++);
return (0);
}
