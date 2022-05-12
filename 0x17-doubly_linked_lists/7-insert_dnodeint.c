#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to a pointer to a listint_t struct
 * @idx: index where new node should be added
 * @n: n value of new node
 *
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL;
	dlistint_t *tmp = *h;
	unsigned int i;

	if (idx == 0)
	{
		tmp = add_dnodeint(h, n);
		return (tmp);
	}

	i = 1;
	while (i < idx)
	{
		tmp = tmp->next;
		if (!tmp)
			return (NULL);
		i++;
	}

	if (!tmp->next)
		return (add_dnodeint_end);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = tmp;
	new->next = tmp->next;
	tmp->next->prev = new;
	tmp->next = new;
	return (new);
}
