#include "holberton.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: number of bytes for each elements
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int allocate, i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	allocate = nmemb * size;

	ptr = malloc(allocate);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < allocate; i++)
		ptr[i] = '\0';

	return (ptr);
}
