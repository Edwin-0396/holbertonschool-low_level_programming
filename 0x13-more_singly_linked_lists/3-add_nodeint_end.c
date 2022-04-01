#include "lists.h"

/**
 * add_nodeint_end - check the code
 * @head: head node
 * @n: number of nodes
 * Return: the address of the new element, 
 * or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *aux;

	new = NULL;
	aux = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	if (*head)
	{
		while (aux->next)
			aux = aux->next;
		aux->next = new;
	}
	else
		*head = new;
	return (new);
}

