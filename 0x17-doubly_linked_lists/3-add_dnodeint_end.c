#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to a pointer to a dlistint_t struct
 * @n: n value of new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;
	dlistint_t *temp = *head;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (!*head)
	{
		new->next = *head;
		*head = new;
		free(new);
		return (new);
	}

	while (!temp->next)
		temp = temp->next;

	new->prev = temp;
	temp->next = new;
	return (new);
}
