#include "main.h"


/**
 * print_times_table -  prints the 9 times table, starting with 0
 *
 * Return: Always 0 (Success)
 */
void print_times_table(int n)
{
  int a, b, c;
  if ((n<=15) && (n>=0))
    {
  for (a = 0; a <= n; a++)
    {
      for (b = 0; b <= n; b++)
	{
	  c = a * b;
	  if (c < 10)
	    {
	      if (b != 0)
		_putchar(' ');
	      _putchar(c + '0');
	    }
	  else
	    {
	      _putchar((c / 10) + '0');
	      _putchar((c % 10) + '0');
	    }
	  if (b == n)
	    {
	      break;
	    }
	  _putchar(',');
	  _putchar(' ');
	}
      _putchar('\n');
    }
    }
}
