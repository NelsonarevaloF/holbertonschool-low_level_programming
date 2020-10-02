#include "holberton.h"

/**
 * _strncat - concatenates some quantity of characters
 * @dest: string of destiny
 * @src: string to copy
 * @n: quantity of characters to concatenates
 * Return: string already copied
 */

char *_strncat(char *dest, char *src, int n)
{
	int cont = 0, cont2 = 0;

	while (dest[cont])
	{
		cont++;
	}

	while (src[cont2] != '\0' && cont2 < n)
	{
		dest[cont] = src[cont2];
		cont++;
		cont2++;
	}
	dest[cont] = '\0';
	return (dest);
}
