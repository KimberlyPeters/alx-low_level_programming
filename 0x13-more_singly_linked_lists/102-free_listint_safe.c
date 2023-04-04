#include "lists.h"

/**
 * free_listint_safe - frees a linked list, even if it contains a loop
 * @h: pointer to the head of the list
 *
 * Return: size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *tmp, *loop_start;

	if (h == NULL || *h == NULL)
		return (count);

	loop_start = find_listint_loop(*h);
	if (loop_start == NULL)
	{
		while (*h != NULL)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			count++;
		}
	}
	else
	{
		while (*h != loop_start)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			count++;
		}
		while ((*h)->next != loop_start)
		{
			tmp = loop_start->next;
			free(loop_start);
			loop_start = tmp;
			count++;
		}
		free(loop_start);
		count++;
		*h = NULL;
	}
	return (count);
}

