#include "lists.h"

/**
 * insert_dnodeint_at_index -  inserts a new node at a given position
 * @h: double pointer to head node
 * @idx:  index of the list where the new node should be added starting from 0
 * @n: data (n) of the node at index
 *Return:  the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{

	unsigned int i;
	dlistint_t *tmp_node;
	dlistint_t *new_node;

	tmp_node = *h;
	if (idx == 0)
	{
		tmp_node = add_dnodeint(h, n);
		return (tmp_node);
	}

	i = 1;
	while (i < idx)
	{
		tmp_node = tmp_node->next;
		if (tmp_node == NULL)
			return (NULL);
		i++;
	}

	if (tmp_node->next == NULL)
		return (add_dnodeint_end(h, n));
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = tmp_node;
	new_node->next = tmp_node->next;
	tmp_node->next->prev = new_node;
	tmp_node->next = new_node;
	return (new_node);
}
