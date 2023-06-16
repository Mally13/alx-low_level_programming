#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: a pointer to the memory previously allocated with a call
 * to malloc: malloc(old_size)
 * @old_size:  the size, in bytes, of the allocated space for ptr
 * @new_size: new size to be allocated
 *
 *
 * Return: if new_size == 0 and ptr is not null -- NULL
 * If ptr is NULL pointer to the new malloc(new_size)
 * If new_size == old_size return ptr
 * if new_size > old_size the “added” memory should not be initialized
 */


void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newptr;
	char *copyptr, *filler;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}


	if (ptr == NULL)
	{
		newptr = malloc(new_size);
		if (newptr == NULL)
			return (NULL);
		return (newptr);
	}

	if (new_size == old_size)
		return (ptr);

	copyptr = ptr;
	newptr = malloc(sizeof(*copyptr) * new_size);

	if (newptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	filler = newptr;

	for (i = 0; i < old_size && i < new_size; i++)
		filler[i] = *copyptr++;

	free(ptr);
	return (newptr);
}
