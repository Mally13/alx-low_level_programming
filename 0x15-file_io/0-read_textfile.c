#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file to read
 * @letter: reads a text file and prints it to the POSIX standard output
 * Return: Number of chars read and printed or
 * if the file can not be opened or read, return 0,
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, chars_read, chars_written;
	char *c;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	c = ((char *)malloc(letters));
	if (!c)
	{
		close(fd);
		return (0);
	}
	chars_read = read(fd, c, letters);
	if (chars_read == -1)
	{
		close(fd);
		free(c);
		return (0);
	}
	chars_written = write(STDOUT_FILENO, c, chars_read);
	if (chars_written == -1 || chars_written != chars_read)
	{
		close(fd);
		free(c);
		return (0);
	}
	close(fd);
	free(c);
	return (chars_written);
}
