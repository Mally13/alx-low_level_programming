#include "lists.h"

/**
 * free_listint - Frees a listint_t list
 * @head: pointer to the head of the list
 */

void free_listint(listint_t *head)
{
	listint_t *holder;

	while (head)
	{
		holder = head->next;
		free(head);
		head = holder;
	}
	head = NULL;
}
