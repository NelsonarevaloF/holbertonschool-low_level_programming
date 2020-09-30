#include "holberton.h"

/**
 * _puts - prints a string
 * @str: pointer to print
 * Return: No return
 */

void _puts(char *str)
{
	int cont = 0;

	for (; str[cont] != '\0'; cont++)
	{
		putchar(str[cont]);
	}
	putchar('\n');
}
