#include "holberton.h"

/**
 * puts2 - prints the pairs characters
 * @str: pointer to prints
 * Return: No return
 */

void puts2(char *str)
{
	int cont;

	for (cont = 0; str[cont] != '\0'; cont += 2)
	{
			_putchar(str[cont]);
	}
	_putchar('\n');
}
