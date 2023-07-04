#include "lists.h"

/**
 * add_nodeint - adda a new node at the beginine of listint_t list
 * @head: pointer to the head of listint_t list
 * @n: int value to be placed in the new node
 * Return: address of the new node or NULL in case of failure
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
