#include "holberton.h"

/**
 * _strncpy - copy n characters from src to dest
 * @dest: string of destiny
 * @src: string to copy
 * @n: quantity of characters to copy
 * Return: string already copied
 */

char *_strncpy(char *dest, char *src, int n)
{
	int len = 0, cont = 0;

	while (src[len])
	{
		len++;
	}

	while (cont < n)
	{
		if (cont >= len)
			dest[cont] = '\0';
		else
			dest[cont] = src[cont];
		cont++;
	}
	return (dest);
}
