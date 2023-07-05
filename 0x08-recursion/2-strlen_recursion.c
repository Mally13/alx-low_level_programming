#include "main.h"
/**
 * _strlen_recursion -returns the length of a string.
 * @s: pointer to string whose length is to be checked
 * Return: int containing length f the string
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}
