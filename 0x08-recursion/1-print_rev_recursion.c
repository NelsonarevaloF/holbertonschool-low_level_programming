#include "holberton.h"

/**
 * _print_rev_recursion - prints a string reverse
 * @s: string to prints
 * Return: No return
 */

void _print_rev_recursion(char *s)
{
	if (!s[1])
	{
		_putchar(s[0]);

		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(s[0]);
}
