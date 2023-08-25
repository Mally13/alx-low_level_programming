#include "main.h"

/**
 * _strchr - Finds a character in a string
 * @s: The string to be searched
 * @c: The character to be found
 * Return: If c is found - a pointer to the first occurence
 * else - NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
