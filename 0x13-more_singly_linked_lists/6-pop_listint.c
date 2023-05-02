#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * and returns the head node's data (n).
 * @head: double pointer to the head of the listint_t linked list
 *
 * Return: the head node's data (n), or 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	if (head == NULL || *head == NULL)
		return (0);

	int n = (*head)->n;

	listint_t *temp = *head;
	*head = (*head)->next;
	free(temp);

	return (n);
}
