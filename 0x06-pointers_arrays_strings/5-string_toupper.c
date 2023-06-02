#include "main.h"
#include <string.h>
/**
 * string_toupper - Changes all lowercase letters to uppercase
 * @s: string to be transformes
 * Return: pointer to the transformed string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		i++;
	}
	return (s);
}
