#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest- memory area to copy n bytes to
 * @src: memory area to copy n bytes from
 * @n: number of bytes to be copies
 * Return:pointer to memory area with the copied bytes
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
