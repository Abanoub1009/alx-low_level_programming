#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at a given index
 * @head: pointer to pointer to the first node of the list
 * @index: index of the node to delete, starting at 0
 *
 * Return: 1 if succeeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *previous;
	unsigned int i;

	if (head == NULL || *head == NULL)
	return (-1);

	if (index == 0)
	{
	current = *head;
	*head = (*head)->next;
	free(current);
	return (1);
	}

	previous = *head;
	for (i = 0; i < index - 1 && previous != NULL; i++)
	previous = previous->next;

	if (previous == NULL || previous->next == NULL)
	return (-1);

	current = previous->next;
	previous->next = current->next;
	free(current);

	return (1);
}
