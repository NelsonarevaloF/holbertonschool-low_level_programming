#include "holberton.h"

/**
 * _strlen - compute the length of a string
 * @s: pointer to compute
 * Return: length of a string
 */

int _strlen(char *s)
{
	int cont = 0;

	for (; s[cont] != '\0'; cont++)
	{}
	return (cont);
}
