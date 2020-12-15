#include "lists.h"

/**
 * sum_dlistint - sum all the data (n) of a linked list
 * @head: pointer to the head
 * Return: the sum all the data
 */

int sum_dlistint(dlistint_t *head)
{
	if (head == NULL)
	{
		return (0);
	}
	else
	{
		int accum = 0;
		dlistint_t *aux = head;

		while (aux != NULL)
		{
			accum = accum + aux->n;
			aux = aux->next;
		}
		return (accum);
	}
}
