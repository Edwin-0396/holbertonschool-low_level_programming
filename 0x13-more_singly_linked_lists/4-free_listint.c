#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: Head node
 */

void free_listint(listint_t *head)
{
	if (!head)
		return;

	if (head->next)
		free_listint(head->next);
	free(head);
}
