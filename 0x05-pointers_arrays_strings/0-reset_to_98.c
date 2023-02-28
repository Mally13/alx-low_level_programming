#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 -takes a pointer to an int as parameter and updates
 *  the value it points to.
 *  @*n: pointer to an int
 *  Return: void
 */

void reset_to_98(int *n)
{
	if (*n != 98)
	{
		*n = 98;
	}
}
