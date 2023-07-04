#include "lists.h"
#include <stdio.h>
/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: list of elements whose length is to be calculated
 * Return: number of elemente in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
