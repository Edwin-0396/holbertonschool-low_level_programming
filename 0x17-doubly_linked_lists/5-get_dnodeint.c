#include "lists.h"
#include <stdio.h>
/**
 * get_dnodeint_at_index - returns the nth node of dlistint_t list
 * @head: pointer to a struct of type dlistint_t
 * @index: index of node to return
 *
 * Return: index of node or NULL if node doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (!head)
		return (NULL);

	if (index == 0)
		return (head);

	return (get_dnodeint_at_index(head->next, index - 1));
}
