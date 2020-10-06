#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to evaluate
 * @accept: string containing the list of characters to match in s
 * Return: number of matches
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, key;
	unsigned int cont = 0;

	for (i = 0; s[i]; i++)
	{
		key = 0;
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				key = 1;
				cont++;
			}
		}
		if (key == 0)
			return (cont);
	}
	return (0);
}
