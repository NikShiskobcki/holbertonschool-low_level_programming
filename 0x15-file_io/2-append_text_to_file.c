#include "main.h"

/**
 * append_text_to_file - appends text to file
 * @filename: input
 * @text_content: input
 * Return: 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd, len = 0, out;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == NULL)
		return (-1);

	if (!text_content)
	{
		close(fd);
		return (1);
	}

	while (text_content[len] != '\0'
			len++;
	out = write(fd, text_content,len);

	if (len != out)
	{
		close(fd);
		return (-1);
	}
	close(fd);

	return (1);

}
