#include "lists.h"
/**
 * sum_listint -sums all elemenst data in a listnt_t list up to the last value
 * @head: pointer to the head of a listint_t list
 * Retuen: sum of all elemetns data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
