#include "lists.h"
#include <stdio.h>
/**
 * sum_dlistint - returns the sum of a doubly linked list
 * @head: pointer to struct of type dlistint_t
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	return ((!head ? 0 : head->n + sum_dlistint(head->next)));
}
