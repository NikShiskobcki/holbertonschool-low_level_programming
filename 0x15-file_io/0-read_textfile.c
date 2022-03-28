#include "main.h"

/**
 * read_textfil - reads text file and prints it
 * @filename: input
 * @letters: input
 * Return: number of letters 
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

char *buffer;
ssize_t fd, in, out;

	if (filename == NULL)
		return (0);
	
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	in = read(fd, buffer, letters);
	if (in == -1)
		return (0);

	out = write(STDOUT_FILENO, buffer, in);
	
	if (in != out)
		return(0);

	return (out);
}
