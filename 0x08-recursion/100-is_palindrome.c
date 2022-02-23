#include "main.h"
#include "2-strlen_recursion.c"

/**
 * aux - main
 * @size : int
 * @i : int
 * @s : char;
 * @sizecpy: size
 * Return: int
 */

int aux(int size, int i, char *s, int sizecpy)
{
if (i > sizecpy / 2)
return (1);
if (s[i] == s[size])
{
return (aux(size - 1, i + 1, s, sizecpy));
}
return (0);
}

/**
 * is_palindrome - main
 * @s : char
 * Return: int
 */

int is_palindrome(char *s)
{
int size = _strlen_recursion(s);
int sizecpy;
if (size == 0 || size == 1)
return (1);
sizecpy = size;
return (aux(size - 1, 0, s, sizecpy));

}
