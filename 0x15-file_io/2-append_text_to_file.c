#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: is the name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0;
	int nl = 0;
	int w_out = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[nl])
			nl++;
		w_out = write(fd, text_content, nl);
		if (w_out == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
