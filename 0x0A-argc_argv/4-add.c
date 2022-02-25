#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *
 *
 *
 */
int main(int argc, char *argv[])
{
  int x, y;
  int sum = 0;

  if (argc == 1)
    {
      printf("0\n");
      return (0);
    }
  

  for (x = 1; x < argc; x++)
    {
      for (y = 0; y < (int)strlen(argv[x]); y++)
	{
	  if (argv[x][y] >= 48 && argv[x][y] <= 57)
	    {
	    }
	  else
	    {
	      printf("Error\n");
	      return (1);
	    }
	}
      sum = sum + atoi(argv[x]);
    }
  printf("%d\n", sum);

  return (0);
}
