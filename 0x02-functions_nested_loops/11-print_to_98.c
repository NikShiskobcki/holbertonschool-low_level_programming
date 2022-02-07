#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * print_to_98 - computes the absolute value of an integer
 * @n: input creo
 * Return: 0 always
 */
void print_to_98(int n)
{
int i;
if (n==98)
{
printf("%d", i);
}
else
if (n<98)
{
for (i=n; i<=98;i++)
{
printf("%d", i);
 if (n != 98)
   {
printf("%c", ',');
printf("%c", ' ');
	 }
 }
     }
   else
     {
       for (i=n;i>=98;i--)
	 {
	   printf("%d", i);
	   if (n != 98)
	     {
	   printf("%c", ',');
	   printf("%c",' ');
	 }
	 }
     }

}
