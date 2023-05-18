#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node in a dlistint_t
 *                            list at a given position.
 * @h: A pointer to the head of the dlistint_t list.
 * @idx: The position to insert the new node.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *nav, *tmp;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	nav = *h;
	if (*h == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		*h = new;
		return (*h);
	}
	if (idx == 0)
	{
		new->next = nav;
		new->prev = NULL;
		nav->prev = new;
		*h = new;
		return (*h);
	}
	while (i < idx - 1)
	{
		nav = nav->next;
		i++;
		if (nav == NULL)
			return (NULL);
	}
	tmp = nav->next;
	nav->next = new;
	new->prev = nav;
	new->next = tmp;

	if (tmp != NULL)
		tmp->prev = new;

	return (new);
}
