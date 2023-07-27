#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file to be read
 * @letters: number of characters it should read and pprint
 * Return: Number of chars written
 * or 0 (file cannot be opened or read, filename is null or
 * write fails)
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
