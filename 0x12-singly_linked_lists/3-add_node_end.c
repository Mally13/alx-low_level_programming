#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: A pointer the head of the list_t list.
 * @str: string to be duplicated and added to the end of a list
 * Return: pointer to the new wlement or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *new_str;
	int i;
	list_t *new, *tail;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new_str = strdup(str);
	if (new_str == NULL)
	{
		free(new);
		return (NULL);
	}
	i = strlen(str);
	new->str = new_str;
	new->len = i;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		tail = *head;
		while (tail->next != NULL)
			tail = tail->next;
		tail->next = new;
	}
	return (*head);
}
