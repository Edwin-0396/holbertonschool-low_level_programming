#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning 
 * of a listint_t list.
 * @head: head node
 * @n: number of nodes
 * Return: the address of the new element, 
 * or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new= NULL;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
