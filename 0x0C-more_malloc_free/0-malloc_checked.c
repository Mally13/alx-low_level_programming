#include "main.h"
#include <stdlib.h>
/*
 * malloc_checked - Allocates memory using malloc
 * @b: size of the memory
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *memory = malloc(b);

	if (memory == NULL)
		exit(98);

	return (memory);
}
