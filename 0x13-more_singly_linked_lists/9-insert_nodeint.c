#include "lists.h"

/**
 * main - check the code
 * 
 * Return: Always 0.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	listint_t *new,*aux = *head;
	unsigned int count = 0;

	if(!*head)
		return(NULL);

	new = malloc (sizeof(listint_t));
	if(!new)
		return(NULL);

	while(*head)
	{
		if(count == idx - 1)
		{	
			new->n = n;
			new->next = aux->next;
			aux->next = new;
			return (new);
		}
		if(aux->next)
			aux = aux->next;
		count++;
	}
	return (NULL);

}