#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the first node of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t count = 0;

	slow = fast = head;

	while (slow && fast && fast->next)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			count++;
			slow = head;
			while (slow != fast)
			{
				count++;
				printf("[%p] %d\n", (void *)slow, slow->n);
				slow = slow->next;
				fast = fast->next;
			}
			printf("[%p] %d\n", (void *)slow, slow->n);
			return (count);
		}
		count++;
	}

	while (slow)
	{
	printf("[%p] %d\n", (void *)slow, slow->n);
	slow = slow->next;
	count++;
	}

	return (count);
}