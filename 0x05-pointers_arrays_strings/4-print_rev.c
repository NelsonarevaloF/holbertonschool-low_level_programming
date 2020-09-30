#include "holberton.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer to reverse
 * Return: No return
 */

void print_rev(char *s)
{
	int cont = 0;

	for (; s[cont] != '\0'; cont++)
	{}

	for (cont = cont - 1; cont >= 0; cont--)
	{
		putchar(s[cont]);
	}
	putchar('\n');
}
