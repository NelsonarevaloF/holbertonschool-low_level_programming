#include "holberton.h"

/**
 * prime_number - check if n is prime number
 * @num: number to check
 * @divisor: divisor
 * Return: i if is prime otherwise 0
 */

int prime_number(int num, int divisor)
{
	if (num / 2 < divisor)
		return (1);
	if (num % divisor == 0)
		return (0);
	return (prime_number(num, divisor + 1));
}


/**
 * is_prime_number - check if n is prime number
 * @n: number to check
 * Return: i if is prime otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_number(n, 2));
}
