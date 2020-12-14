#include "lists.h"

/**
 * print_dlistint - prints all the elements of a list.
 * @h: pointer to a struct or node
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	if (h == NULL)
	{
		return (0);
	}
	else
	{
		int cont = 0;
		const dlistint_t *aux = h;

		while (aux != NULL)
		{
			printf("%d\n", aux->n);
			cont++;
			aux = aux->next;
		}
		return (cont);
	}
}
