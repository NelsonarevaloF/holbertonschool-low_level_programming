#include "lists.h"

/**
 * insert_dnodeint_at_index -  inserts a new node at a given position
 * @h: pointer to head
 * @idx: index when we are going to insert a new node
 * @n: date to insert
 * Return: new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	if (*h == NULL)
	{
		return (NULL);
	}
	else
	{
		unsigned int cont = 0;
		dlistint_t *aux = *h;

		while (aux != NULL)
		{
			if (cont == idx)
			{
				dlistint_t *new = malloc(sizeof(dlistint_t));

				if (new != NULL)
				{
					new->n = n;
					new->prev = aux->prev;
					new->next = aux;
					aux->prev->next = new;
					aux->prev = new;
				}
				return (new);
			}
			cont++;
			aux = aux->next;
		}
	}
return (NULL);
}
