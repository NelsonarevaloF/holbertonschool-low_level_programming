#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a linked list.
 * @head: pointer to the head
 * @index: the nth node that will be return
 * Return: a node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
		unsigned int cont = 0;
		dlistint_t *aux = head;

		while (aux != NULL)
		{
			if (cont == index)
				return (aux);
			cont++;
			aux = aux->next;
		}
	}
return (NULL);
}
