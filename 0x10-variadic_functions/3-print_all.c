#include "variadic_functions.h"


/**
 * print_c - prints char
 * @c: input
 */
void print_c(va_list c)
{
  printf("%c", va_arg(c, int));
}

/**
 * print_i - prints int
 * @i: input
 */
void print_i(va_list i)
{
  printf("%d", va_arg(i, int));
}


/**
 * print_f - prints float
 * @f: input
 */
void print_f(va_list f)
{
  printf("%f", va_arg(f, double));
}


/**
 * print_s - prints string
 * @s: input
 */
void print_s(va_list s)
{
  char *str = va_arg(s, char *);
  if (str == NULL)
  str = "(nil)";
  printf("%s", str);
}



/**
 *
 *
 *
 *
 */
void print_all(const char * const format, ...)
{
  format_t x[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
                };
  int i = 0, j;
  va_list a;
  char *sep = "";
  va_start(a, format);
  while (format && format[i])
    {
      j = 0;
      while (x[j].form != NULL)
	{
	  if (*(x[j].form) == format[i])
	    {
	      printf("%s", sep);
	      x[j].f(a);
	      sep = ", ";
	      break;
	    }
	  j++;

	}
      i++;





    }
  va_end(a);
  printf("\n");
}
