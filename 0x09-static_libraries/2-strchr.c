#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: String to be checked
 * @c: character to be checked
 * Return: pointer to the first occurrence of the
 * character r NULL;
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
