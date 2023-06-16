#include "main.h"
#include <stdlib.h>
/**
 * array_range - Creates an array of interges within a certain range
 * @min: first int value
 * @max: last int value
 * Return: The pointer to the newly created array or NULL if
 * min > max or malloc fails
 */

int *array_range(int min, int max)
{
	int *arr, size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min++;

	return (arr);
}
