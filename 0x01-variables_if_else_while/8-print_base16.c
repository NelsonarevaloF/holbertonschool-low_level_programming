#include <stdlib.h>
#include <stdio.h>
/**
 * main - choose if the number is positive or negative
 * Return: always 0
 */
int main(void)
{
	char hexadecimal = '0';

	while (hexadecimal <= '9')
	{
		putchar(hexadecimal);
		hexadecimal++;
	}
	hexadecimal = 'a';
	while (hexadecimal <= 'f')
	{
		putchar(hexadecimal);
		hexadecimal++;
	}
	putchar('\n');
return (0);
}
