#include "holberton.h"

/**
 * rev_string - reverse a string
 * @s: pointer to reverse
 * Return: No return
 */

void rev_string(char *s)
{
	int cont = 0, i, j;
	char temporal = 0;

	while (s[cont] != '\0')
	{
		cont++;
	}

	for (i = 0, j = cont - 1; i < cont / 2; i++, j--)
	{
		temporal = s[i];
		s[i] = s[j];
		s[j] = temporal;
	}
}
