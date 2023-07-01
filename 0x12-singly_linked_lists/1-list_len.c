#include "lists.h"
/**
 * list_len - returns the number of elements in a linked
 * list_t list
 * @h: list to be checked
 * Return: number of elements in a linked list_t list
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
