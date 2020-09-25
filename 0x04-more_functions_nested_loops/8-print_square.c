#include "holberton.h"

/**
 * print_square - prints a square
 * @size: size of the square
 * Return: no return
 */

void print_square(int size)
{
	int width = 0;
	int height;

	if (size > 0)
	{
		while (width < size)
		{
			height = 0;
			while (height < size)
			{
				_putchar('#');
				height++;
			}
			_putchar('\n');
			width++;
		}
	}
	else
		_putchar('\n');
}
