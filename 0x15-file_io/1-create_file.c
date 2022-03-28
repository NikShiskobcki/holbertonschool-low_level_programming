#include "main.h"

/**
 *create_file - creates a file
 * @filename: input
 * @text_content: input
 * Return: 1
 */
int create_file(const char *filename, char *text_content)
{
int fd;
ssize_t len = 0, out;

	if (filename == NULL)
		return (-1);
	
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	
	if (!text_content)
		return (1);
	while (text_content[len] != '\0')
		len++;

	out = write(fd, text_content, len);

	if (len != out)
		return (-1);

	return (1);
}
