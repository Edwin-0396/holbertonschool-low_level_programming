#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a
 * new node at a given position.
 *@head: head node
 * @n: element of the node
 * @idx: index to add the node
 * Return: Always 0.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;

	listint_t *new;
	listint_t *temp;

	if (*head == NULL)
		return (NULL);

	temp = *head;

	while (temp != NULL)
	{
		if (count == idx - 1)
		{
			new = malloc(sizeof(listint_t));
			if (new == NULL)
				return (NULL);

			new->n = n;
			new->next = temp->next;
			temp->next = new;
			return (new);

		}
		if (temp->next != NULL)
			temp = temp->next;
		count++;
	}
	return (NULL);
}
