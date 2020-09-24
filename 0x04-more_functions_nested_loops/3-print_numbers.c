#include "holberton.h"

/**
 * print_numbers - print the numbers from 0 until 9
 * Return: no return
 */

void print_numbers(void)
{
	char numbers = '0';

	while (numbers <= '9')
	{
		_putchar(numbers);
		numbers++;
	}
	_putchar('\n');
}
