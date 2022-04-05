#include "main.h"
/**
 * read_textfile - unction that reads a text file and prints
 * it to the POSIX standard output.
 * @filename: file to read
 * @letters: letters is the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t r_out, w_out;

	if (!filename)
		return (0);

	buf = malloc(letters * sizeof(char) + 1);
	if (!buf)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}
	r_out = read(fd, buf, letters);
	if (r_out == -1)
	{
		return (0);
	}
	w_out = write(STDOUT_FILENO, buf, r_out);
	if (w_out == -1)
	{
		return (0);
	}

	close(fd);

	free(buf);

	return (w_out);
}
