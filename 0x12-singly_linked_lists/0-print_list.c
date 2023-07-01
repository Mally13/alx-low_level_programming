#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all eleements of a list_t list
 * @h: list of elements to be printed
 * Return: No. of nodes in the list or NULL
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		n++;
		h = h->next;
	}
	return (n);
}
