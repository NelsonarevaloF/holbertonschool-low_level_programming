#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to head in a list
 * Return: number of elements in a list
 */

size_t list_len(const list_t *h)
{
	const list_t *new = h;
	size_t count = 0;

	while (new != NULL)
	{
		count += 1;
		new = new->next;
	}
	return (count);
}
