#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new
 * node at a given position.
 * @head: head of the list
 * @index: location to insert node
 * @n: value of the inserted node
 * Return: pointer to head of list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *aux, *new;

	aux = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (index == 0)
	{
		new->next = aux;
		*head = new;
		return (*head);
	}
	while (index > 1)
	{
		aux = aux->next;
		index--;
		if (!aux)
		{
			free(new);
			return (NULL);
		}
	}
	new->next = aux->next;
	aux->next = new;
	return (new);
}
