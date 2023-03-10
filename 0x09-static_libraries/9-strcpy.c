#include "main.h"
#include <stddef.h>

/**
 * *_strcpy -copies the string pointed to by src,
 *  including the terminating null byte
 *  @dest: where to copy the string
 *  @src: string to copy
 *  Return: pointer to char(dest)
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	if (dest == NULL)
		return (NULL);

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
