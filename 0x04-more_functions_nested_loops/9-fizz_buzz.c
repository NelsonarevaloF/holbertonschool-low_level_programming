#include "holberton.h"

/**
 * main - prints the numbers from 1 to 100 with some
 * conditions
 *
 * Return: Always 0.
 */
int main(void)
{
	int numbers = 1;

	while (numbers <= 100)
	{
		if (numbers % 3 == 0 && numbers % 5 == 0)
			printf("FizzBuzz ");
		else if (numbers % 3 == 0)
			printf("Fizz ");
		else if (numbers % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", numbers);
		numbers++;
	}
	printf("\n");
	return (0);
}
