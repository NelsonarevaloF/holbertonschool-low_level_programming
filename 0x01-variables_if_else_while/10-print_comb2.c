
#include <stdlib.h>
#include <stdio.h>
/**
 * main - choose if the number is positive or negative
 * Return: always 0
 */
int main(void)
{
	int number1 = 48;
	int number2 = 48;

	while (number1 <= 57)
	{
		while (number2 <= 57)
		{
			putchar(number1);
			putchar(number2);
			if (number1 != 57 || number2 != 57)
			{
				putchar(',');
				putchar(' ');
			}
			number2++;
		}
		number2 = 48;
		number1++;
	}
	putchar('\n');
return (0);
}
