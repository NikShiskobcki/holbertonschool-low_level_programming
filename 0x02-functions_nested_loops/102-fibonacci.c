#include <stdio.h>

/**
 * main - entry point
 *
 *
 * Return: 0 always
 */
int main(void)
{
  long int prev1, prev2, fibo, i;
  fibo=1;
  prev1=0;
  prev2=0;
  i=1;
  
  
  while (i<=50)
    {
      fibo=prev1+prev2;
      prev1=fibo;
      prev2=prev1;
      printf("%ld",fibo);
      i=i+1;
      
    
	if (i!=50)
	  {
	    printf("%s", ", ");
	  }
    }
  return (0);
}
