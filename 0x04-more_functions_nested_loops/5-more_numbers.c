#include "holberton.h"

/**
 * more_numbers - print 10 times the numbers, from 0 to 14
 * Return: no return
 */

void more_numbers(void)
{
	int times10;

	for (times10 = 0; times10 < 10; times10++)
	{
		int numbers = 0;

		while (numbers <= 14)
		{
			if (numbers >= 10)
			{
				_putchar('0' + numbers / 10);
			}
			_putchar('0' + numbers % 10);
			numbers++;
		}
		_putchar('\n');
	}
}
