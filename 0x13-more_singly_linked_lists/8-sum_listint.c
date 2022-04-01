#include "lists.h"

/**
 * main - check the code
 * 
 * Return: Always 0.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
