#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: pointer to a struct or node
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	if (!h)
	{
		return (0);
	}
	else
	{
		int cont = 0;
		const dlistint_t *aux = h;

		while (aux != NULL)
		{
			cont++;
			aux = aux->next;
		}
		return (cont);
	}
}
