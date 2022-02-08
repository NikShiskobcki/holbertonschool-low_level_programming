#include <stdio.h>

/**
 * main - entry point
 *
 *
 * Return: 0 always
 */
int main(void)
{
  char str[11];
  int prev, fibo, i;
  fibo=0;
  prev=1;
  i=1;
  
  
  while (i<=50)
    {
      fibo=fibo+prev;
      prev=fibo;
      sprintf(str, "%d", fibo);
      printf("%s",str);
      i=i+1;
      
    
	if (i!=50)
	  {
	    printf("%s", ", ");
	  }
    }
  return (0);
}
