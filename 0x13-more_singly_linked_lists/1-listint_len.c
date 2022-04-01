#include "lists.h"

/**
 * listint_len - function that returns the number of elements
 * in a linked listint_t list.
 *@h: head node
 * Return: Always 0.
 */

size_t listint_len(const listint_t *h)
{

	size_t n_nodos = 0;

	while (h)
	{
		h = h->next;
		n_nodos++;
	}
	return (n_nodos);
}
