#include "lists.h"

/**
 * free_listint2 - frees the list and sets head to NULL
 * @head: head node (double pointer)
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *aux;

	if (!head)
		return;

	aux = *head;
	while (*head)
	{
		aux = *head;
		*head = (*head)->next;
		free(aux);
	}
	free(*head);
	*head = NULL;
}
