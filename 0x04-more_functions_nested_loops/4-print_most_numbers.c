#include "holberton.h"

/**
 * print_most_numbers - print the numbers from 0 until 9
 * less 2 and 4
 * Return: no return
 */

void print_most_numbers(void)
{
	char numbers = '0';

	while (numbers <= '9')
	{
		if (numbers != '2' && numbers != '4')
		{
			_putchar(numbers);
		}
		numbers++;
	}
	_putchar('\n');
}
