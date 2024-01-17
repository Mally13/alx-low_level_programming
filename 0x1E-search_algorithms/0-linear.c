#include "search_algos.h"
#include <stdio.h>
#include <stddef.h>

/**
 * linear_search - Searches for the value in an array of integers
 * using linear search algorithm
 * @array: pointer to the array to be searched
 * @size: Size of the array
 * @value: value to be searched
 * Return: index of the value or -1 if array is NULL
 * or no value found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int value_found = -1;

	if (array && size != 0)
	{
		for (i = 0; i < size - 1; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
			{
				value_found = i;
				return (value_found);
			}
		}
	}
	return (value_found);
}
