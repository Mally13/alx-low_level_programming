#include "lists.h"
#include <string.h>
/**
 * add_node - adda a new node at the beginning of a list_t list
 * @head: pointer to the head of list_t list
 * @str: string to be duplicated in the new wode
 * Return: address of the new element or NULL in case of failure
 */
list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	i = strlen(str);
	new->len = i;
	new->next = *head;

	*head = new;
	return (new);
}
