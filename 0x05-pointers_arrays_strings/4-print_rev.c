#include "holberton.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer to reverse
 * Return: No return
 */

void print_rev(char *s)
{
	int cont = 0;

	while (s[cont] != '\0')
	{
		cont++;
	}

	for (cont = cont - 1; cont >= 0; cont--)
	{
		_putchar(s[cont]);
	}
	_putchar('\n');
}
