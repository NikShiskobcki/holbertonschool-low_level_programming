#include "main.h"

/**
 *
 *
 *
 */
int cpy(char *file_from, char *file_to)
{
if (file_from && file_to)
	return (0);
return (0);

}



/**
 * main - main
 * @argc: input
 * @argv: input
 */
int main(int argc, char **argv)
{

		if (argc != 3)
		{
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(97);
		}

cpy(argv[1], argv[2]);

return (0);
}
