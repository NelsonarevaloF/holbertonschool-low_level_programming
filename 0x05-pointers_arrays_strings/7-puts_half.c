#include "holberton.h"

/**
 * puts_half - prints half of a string
 * @str: pointer to prints
 * Return: No return
 */

void puts_half(char *str)
{
	int cont = 0;
	int print, n;

	while (str[cont] != '\0')
		cont++;

	if (cont % 2 == 0)
	{
		for (print = cont / 2; str[print] != '\0'; print++)
		{
			_putchar(str[print]);
		}
	}
	else if (cont % 2 != 0)
	{
		n = (cont - 1) / 2;
		for (print = n + 1; str[print] != '\0'; print++)
			{
				_putchar(str[print]);
			}
	}
	_putchar('\n');
}
