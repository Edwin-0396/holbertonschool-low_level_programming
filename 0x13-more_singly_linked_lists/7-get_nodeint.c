#include "lists.h"

/**
 * *get_nodeint_at_index - function returns nth node of a listint_t list
 *
 *@head: pointer to pointer of head of linked list
 *@index: index of node starting at 0
 *
 * Return: nth node of listint_t list, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (!head)
		return (NULL);

	if (index > 0)
		return (get_nodeint_at_index(head->next, index - 1));
	return (head);
}
