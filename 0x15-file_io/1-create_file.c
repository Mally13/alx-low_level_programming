#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: name of the file to be created
 * @text_content: string to be written
 * Return: 1 (success) -1 (failure)
 */
int create_file(const char *filename, char *text_content)
{
	int fd, chars_written;
	
	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		chars_written = write(fd, text_content, strlen(text_content));
		if (chars_written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
