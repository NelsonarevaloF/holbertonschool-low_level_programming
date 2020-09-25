#include "holberton.h"

/**
 * print_triangle - draws a diagonal line on the terminal
 * @size: size of the line
 * Return: no return
 */

void print_triangle(int size)
{
	int temporal1 = size;
	int tmp;
	int tope;
	int contador = 0;

	if (size > 0)
	{
		while (temporal1 > 0)
		{
			tmp = 1;
			while (tmp < temporal1)
			{
				_putchar(' ');
				tmp++;
			}
			contador++;
			tope = 0;
			while (tope < contador)
			{
				_putchar('#');
				tope++;
			}
			_putchar('\n');
			temporal1--;
		}
	}
	else
		_putchar('\n');
}
