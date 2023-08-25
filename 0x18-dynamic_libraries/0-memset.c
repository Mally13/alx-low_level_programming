#include "main.h"
/**
 * _memset - Fills the first n bytes of the memory area
 * pointed to by @s with the constant byte @b
 * @s: A pointer to the memory area to be filled
 * @b: The character to fill the memory area
 * @n: The number of bytes to be filled
 * Return: A pointer to the filled memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *memory = s, value = b;

	for (i = 0; i < n; i++)
		memory[i] = value;

	return (memory);
}
