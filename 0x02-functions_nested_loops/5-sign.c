#include <stdlib.h>
#include "holberton.h"

/**
 * print_sign - print -, 0, + according to the case
 * @n: character to evaluate
 * Return: if the character is less that 0 return -1
 * if is 0 return 0 otherwise return 1
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('+');
		return (1);
	}
}
