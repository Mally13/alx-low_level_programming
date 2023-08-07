#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of a file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 (success) -1 (failure)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, chars_written;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
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
