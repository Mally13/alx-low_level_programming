#include "main.h"
/**
 * _memcpy - Copies a number bytes from the memory area pointed
 * to by @src into that pointed to by @dest
 * @dest: A pointer to the memory area to copy @src into
 * @src: The source buffer to copy characters from
 * @n: The number of bytes to copy from @src
 * Return: A pointer to the destination buffer @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *destination = dest, *source = src;

	for (i = 0; i < n; i++)
		destination[i] = source[i];
	return (dest);
}
