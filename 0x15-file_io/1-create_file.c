#include "main.h"
/**
 * create_file - a function that creates a file
 * @filename: file
 * @text_content: content of the file
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int fd = 0;
	int nletters = 0;
	int w_out = 0;

	if (!filename)
		return (-1);

	if (!text_content)
	{
		fd = open(filename, O_CREAT, 0600);
		if (fd == -1)
			return (-1);
		return (1);
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	while (text_content[nletters])
	{
		nletters++;
	}
	w_out = write(fd, text_content, nletters);

	if (w_out == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
