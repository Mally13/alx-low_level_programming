#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdarg.h>

/**
 * close_file - closes files
 * @n: number of files to be closed
 * @...: variable file descriptors arguments to be closed
 */

void close_file(int n, ...)
{
	va_list args;
	int i, fd;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		fd = va_arg(args, int);
		if (close(fd) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			exit(100);
		}
	}
	va_end(args);
}
/**
 * create_buf - create a 1024 memory
 * @file: name of file to be written
 * Return: pointer to buffer
 */
char *create_buf(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buf);
}
/**
 * main - copies the content of a file to another file.
 * @argc: number of arguments
 * @argv: Array of pointers to arguments
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int filefrom, fileto, chars_read, chars_written;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	filefrom = open(argv[1], O_RDONLY);
	chars_read = read(filefrom, buf, 1024);
	if (filefrom == -1 || chars_read == -1)
	{
		free(buf);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		if (filefrom != -1)
			close_file(1, filefrom);
		exit(98);

	}
	fileto = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0644);
	chars_written = write(fileto, buf, chars_read);
	if (fileto == -1 || chars_written == -1)
	{
		free(buf);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close_file(1, filefrom);
		if (fileto != -1)
			close_file(1, fileto);
		exit(99);
	}
	free(buf);
	close_file(2, filefrom, fileto);
	return (0);
}

