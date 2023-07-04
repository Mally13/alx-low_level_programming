#include "lists.h"
/**
 * free_listint2 - frees listint_t list and sets head to NULL
 * @head:pointer to the head of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *holder;

	while (*head)
	{
		holder = (*head)->next;
		free(*head);
		*head = holder;
	}
	head = NULL;
}
