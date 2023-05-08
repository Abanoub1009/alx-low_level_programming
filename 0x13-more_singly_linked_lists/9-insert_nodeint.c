#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: A pointer to the head of the listint_t list.
 * @idx: The index of the list where the new node should be added.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *tmp = *head;
	unsigned int node_idx = 0;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;

	if (!idx)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (tmp)
	{
		if (node_idx == idx - 1)
		{
			new_node->next = tmp->next;
			tmp->next = new_node;
			return (new_node);
		}
		node_idx++;
		tmp = tmp->next;
	}
	free(new_node);
	return (NULL);
}
