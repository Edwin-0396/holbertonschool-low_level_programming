#include "lists.h"

/**
 * free_listint2 - frees the list and sets head to NULL
 * @head: head node (double pointer)
 * Return: void
 */

void free_listint2(listint_t **head)
{
	if (!head)
		return;

	if (*head)
		free_listint2(&((*head)->next));
	free(*head);
	*head = NULL;
}
