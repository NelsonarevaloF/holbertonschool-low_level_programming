#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - add all the numbers.
 * @n: numbers of parameters to sum
 * Return: sum of all the parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
va_list sum;
int total = 0;
unsigned int i;

if (!n)
	return (0);

va_start(sum, n);

for (i = 0; i < n; i++)
{
	total += va_arg(sum, int);
}
va_end(sum);

return (total);
}
