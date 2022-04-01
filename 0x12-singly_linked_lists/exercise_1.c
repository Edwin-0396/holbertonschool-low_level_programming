#include "lists.h"

/**
 * print_list - function that prints all
 * the elements of a list_t list.
 *
 * @h: head node.
 * Return: the number of nodes
 */

list_t *print_list_1(const list_t *h, size_t index)
{
	size_t cont = 0;

	while (h)
	{
		if(cont == index)
		{
			printf("[%d] %s\n", h->len, h->str);
			return(h);	
		}
		cont++;			
		h = h->next;
	}
	return (NULL);
}
