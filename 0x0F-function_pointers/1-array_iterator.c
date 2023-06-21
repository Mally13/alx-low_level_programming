#include "function_pointers.h"

/**
 * array_iterator - executes a function given as parameter
 * on each element of an array
 * @array: array
 * @size: size of an array
 * @action: Pointer to the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL || size <= 0)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
