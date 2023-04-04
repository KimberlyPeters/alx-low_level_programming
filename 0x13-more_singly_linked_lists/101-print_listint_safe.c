#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list
 * @head: Pointer to the first element of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head, *fast = head;
	int loop_exists = 0;
	size_t node_count = 0;

	while (slow && fast && fast->next)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);

		node_count++;
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			loop_exists = 1;
			break;
		}
	}

	if (loop_exists)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		do {
			node_count++;
			slow = slow->next;
			printf("[%p] %d\n", (void *)slow, slow->n);
		} while (slow != fast);
	}

	return (node_count);
}
