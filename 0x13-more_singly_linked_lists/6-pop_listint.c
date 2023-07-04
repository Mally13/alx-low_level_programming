#include "lists.h"
/**
 * pop_listint -  head node of a listint_t linked list, and returns the head
 * node’s data (n).
 * @head: pointer to the head of listint_t list
 * Return: head node data if empty 0
 */

int pop_listint(listint_t **head)
{
	listint_t *holder;
	int data;

	if (*head == NULL)
		return (0);
	holder = *head;
	data = (*head)->n;
	*head = (*head)->next;
	free(holder);
	return (data);
}
