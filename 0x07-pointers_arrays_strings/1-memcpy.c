#include "holberton.h"

/**
 * _memcpy - copies memory area
 * @dest: matriz where going to copy
 * @src: from where to copy
 * @n: quantity of characters to copy
 * Return: pointer to array.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
