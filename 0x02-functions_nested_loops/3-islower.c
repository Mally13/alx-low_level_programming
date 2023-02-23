#include "main.h"

/**
 * _islower - checks for a lowercase character
 * @c:  parameter value to be checked of type int
 * Return:1 (lowercase)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
