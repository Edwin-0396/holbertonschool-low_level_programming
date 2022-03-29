#include "lists.h"

/**
 * list_len - function that returns the number
 *  of elements in a linked list_t list.
 * @h: head node
 *
 * Return: Always 0.
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
