#include "main.h"
/**
 * _isupper - Checks for uppercase characters
 * @c: character to be checked
 * Return: 1 if uppercase 0 if lower
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
