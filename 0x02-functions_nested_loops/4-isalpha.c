#include "main.h"

/**
 * _isalpha - checks for letter either lower or uppercase
 * @c : input creo
 * Return: 1 if lowercase, 0 otherwise
 */
int _isalpha(int c)
{

if (((c >= 'A') && (c <= 'Z')) || ((c >= 'a') && (c <= 'z')))
{
return (1);
}
else
{
return (0);
}
}
