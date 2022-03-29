#include "main.h"

/**
 * err_rc - errors of read or close
 * @arg1: input
 * @arg2: input
 * @x: input
 * @fd_from: input
 * @fd_to: input
 */
void err_rc(char *arg1, char *arg2, ssize_t x, int fd_from, int fd_to)
{

		if (x == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arg1);
			exit(98);
		}
		if (close(fd_to) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", *arg2);
			exit(100);
		}
		if (close(fd_from) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", *arg1);
			exit(100);
		}
}

/**
 * main - main
 * @argc: arg count
 * @argv: args
 * Return: 0
 */
int main(int argc, char *argv[])
{
int fd_from, fd_to;
char buffer[1024];
ssize_t x, y;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((x = read(fd_from, buffer, 1024)) > 0)
	{
		if (x == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		y = write(fd_to, buffer, x);
		if (y == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	err_rc(argv[1], argv[2], x, fd_from, fd_to);
	return (0);
}
