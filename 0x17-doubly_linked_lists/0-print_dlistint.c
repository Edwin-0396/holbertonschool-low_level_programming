#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @head: pointer to a struct of type dlistint_t
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *head)
{
	int counter = 0;

	while (head)
	{
		printf("%d\n", head->n);
		counter++;
		head = head->next;
	}
	return (counter);
}
