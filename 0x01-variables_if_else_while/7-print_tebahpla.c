#include <stdlib.h>
#include <stdio.h>
/**
 * main - choose if the number is positive or negative
 * Return: always 0
 */
int main(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}
	putchar('\n');
return (0);
}
