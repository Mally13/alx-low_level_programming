#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array of nmemb elements of size bytes each
 * using malloc
 * @nmemb: number of elements
 * @size: number of bytes for each element
 * Return: a pointer to the allocated memory or NULL if size or
 * nmemb is 0 or if malloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	unsigned int i;
	char *f;

	if (size == 0 || nmemb == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	f = mem;

	for (i = 0; i < (size * nmemb); i++)
		f[i] = '\0';

	return (mem);
}
