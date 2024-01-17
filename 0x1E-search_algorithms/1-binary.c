#include "search_algos.h"
#include <stdio.h>
/**
 * binary_search - Searches for value in a sorted array of
 * integers using Binary Search Algorithm
 * @array: array to be searched
 * @size: size of the array
 * @value: value to be searched
 * Return: Index of where the value is located or -1 if array is
 * NULL or value not found
 */

int binary_search(int *array, size_t size, int value)
{
	int val_found = -1;
	size_t i, low, high, mid;

	if (array && size != 0)
	{
		low = 0;
		high = size - 1;
		while (low <= high)
		{
			printf("Searching in array: ");
			for (i = low; i <= high; i++)
			{
				if (i < high)
					printf("%d, ", array[i]);
				else
					printf("%d\n", array[i]);
			}
			mid = (low + high) / 2;

			if (array[mid] == value)
			{
				val_found = mid;
				break;
			}
			else if (array[mid] < value)
			{
				low = mid + 1;
			}
			else
			{
				high = mid - 1;
			}
		}
	}
	return (val_found);
}
