#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements in a list
 * @h: a list of elements to be printed
 * Return: No. of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (n);
}
