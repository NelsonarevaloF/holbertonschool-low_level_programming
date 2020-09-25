#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: size of the line
 * Return: no return
 */

void print_diagonal(int n)
{
	int Qvertical = 0;
	int Qhorizontal;

	if (n > 0)
	{
		while (Qvertical < n)
		{
			Qhorizontal = 0;
			while (Qhorizontal < Qvertical)
			{
				_putchar(' ');
				Qhorizontal++;
			}
			_putchar('\\');
			_putchar('\n');
			Qvertical++;
		}
	}
	else
		_putchar('\n');
}
