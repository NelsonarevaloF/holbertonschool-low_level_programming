#include "holberton.h"

/**
 * _memset - fills memory with a constant byte
 * @s: string to fill
 * @b: character that should be filled
 * @n: quantity of times to be filled
 * Return: pointer to array already filled.
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

return (s);
}
