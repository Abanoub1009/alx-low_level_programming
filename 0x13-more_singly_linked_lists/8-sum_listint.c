#include "lists.h"
/**
 * sum_listint - calculates the sum of all the data (n) of a listint_t list.
 *
 * @head: pointer to the first node in the list.
 *
 * Return: the sum of all the data (n) of the list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *p = head;

	if (head == NULL)
	{
		return (0);
	}
	while (p != NULL)
	{
		sum += p->n;
		p = p->next;
	}
	return (sum);
}
