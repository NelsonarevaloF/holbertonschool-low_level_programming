#include "holberton.h"

/**
 * print_line - print a quantity of the character _
 * @n: quantity of times to print
 * Return: no return
 */

void print_line(int n)
{
	int repeat = 1;

	if (n > 0)
	{
		while (repeat <= n)
		{
			_putchar('_');
			repeat++;
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
