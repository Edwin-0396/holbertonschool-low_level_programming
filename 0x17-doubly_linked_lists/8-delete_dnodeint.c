#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a specified index
 * @head: pointer to pointer to a dlistint_t list
 * @index: index of node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;

	if (!head)
		return (-1);
	if (index == 0 && *head)
	{
		tmp = (*head);
		if (tmp)
			*head = (*head)->next;
		free(tmp);
		return (1);
	}

	if (!*head || (!(*head)->next && index == 1))
		return (-1);

	if (index == 1)
	{
		tmp = (*head)->next;
		(*head)->next = (*head)->next->next;
		free(tmp);
		return (1);
	}

	return (delete_dnodeint_at_index(&(*head)->next, index - 1));
}
