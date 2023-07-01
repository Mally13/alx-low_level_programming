#include "lists.h"
#include <string.h>

/**
 * free_list - frees a list_t list
 * @head: pointer to the list_t list
 */
void free_list(list_t *head)
{
	list_t *holder;

	while (head)
	{
		holder = head->next;
		free(head->str);
		free(head);
		head = holder;
	}
	head = NULL;
}
