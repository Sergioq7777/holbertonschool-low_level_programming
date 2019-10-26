#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its parameters.
 *@n: unsigned int.
 *@x: unsigned int
 *
 * Return: Always .
 */

int sum_them_all(const unsigned int n, ...)
{

	va_list arguments;
	unsigned int x, sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(arguments, n);

	for (x = 0; x < n; x++)
	{
		sum += va_arg(arguments, unsigned int);
	}
	va_end(arguments);

	return (sum);
}
