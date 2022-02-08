#include <stdio.h>

/**
 * main - entry point
 *
 *
 * Return: 0 always
 */
int main(void)
{
  long int prev, fibo, i;
  fibo=1;
  prev=0;
  i=1;
  
  
  while (i<=50)
    {
      fibo=fibo+prev;
      prev=fibo;
      printf("%ld",fibo);
      i=i+1;
      
    
	if (i!=50)
	  {
	    printf("%s", ", ");
	  }
    }
  return (0);
}
