#include "main.h"

/**
 * _islower - checks for a lowercase character
 * Return:1 (lowercase)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
