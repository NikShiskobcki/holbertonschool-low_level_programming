#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of his function
 * @argc: int
 * @argv: chars
 * Return: O
 */

int main(int argc, char *argv[])
{
  if (argc != 2)
    {
      printf("Error");
      exit(1);
    }

  if (atoi(argv[1]) < 0)
    {
      printf("Error");
      exit(2);
    }
  system("gcc 100-main_opcodes.c -c");
  system("objdump -D 100-main_opcodes.o");
 
    
	
  return (0);
}
