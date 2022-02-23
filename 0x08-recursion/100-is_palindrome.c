#include "main.h"
#include "2-strlen_recursion.c"

/**
 * aux - main
 * @size : int
 * @i : int
 * @s : char;
 * Return: int
 */

int aux(int size, int i, char *s)
{
  if ( i >= size / 2)
    return (1);
  if (s[i] == s[size])
    {
      return (aux(size -1, i + 1, s));
    }
  return (0);
}

/**
 * is_polindrome - main
 * @s : char
 * Return: int
 */

int is_palindrome(char *s)
{
  int size = _strlen_recursion(s);
  if (size == 0 || size == 1)
    return (1);
  if (size % 2 == 0)
  return (aux(size - 1, 0, s));
  else
    return (aux(size - 1, 0, s));


}
