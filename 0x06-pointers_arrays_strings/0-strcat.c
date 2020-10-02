#include "holberton.h"

/**
 * _strcat - concatenates two strings
 * @dest: string of destiny
 * @src: string to copy
 * Return: string already copied
 */

char *_strcat(char *dest, char *src)
{
	int cont = 0, cont2 = 0;

	while (dest[cont])
	{
		cont++;
	}

	while (src[cont2])
	{
		dest[cont] = src[cont2];
		cont++;
		cont2++;
	}
	dest[cont] = '\0';
	return (dest);
}
