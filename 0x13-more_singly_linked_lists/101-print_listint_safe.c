#include "lists.h"

/**
 * free_listp - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listp(listp_t **head)
{
	listp_t *temp;
	listp_t *current;

	if (head != NULL)
	{
		current = *head;
		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}
		*head = NULL;
	}
}
/**
 * print_listint_safe - Prints a listint_t linked list
 * @head: Pointer to the first element of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nnodes = 0;
	listp_t *head_ptr, *new_node, *current_node;

	head_ptr = NULL;
	while (head != NULL)
	{
		new_node = malloc(sizeof(listp_t));

		if (new_node == NULL)
			exit(98);

		new_node->p = (void *)head;
		new_node->next = head_ptr;
		head_ptr = new_node;

		current_node = head_ptr;

		while (current_node->next != NULL)
		{
			current_node = current_node->next;
			if (head == current_node->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&head_ptr);
				return (nnodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nnodes++;
	}

	free_listp(&head_ptr);
	return (nnodes);
}

