#include "lists.h"

/**
 * pop_listint - check the code
 *@head: head node
 * Return: element deleted.
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *aux;

	if (!head || !*head)
		return (0);

	n = (*head)->n;
	aux = *head;
	*head = (*head)->next;
	free(aux);
	return (n);
}
