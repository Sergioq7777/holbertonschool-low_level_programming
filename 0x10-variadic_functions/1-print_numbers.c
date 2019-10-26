#include "variadic_functions.h"

/**
 * print_number - function that prints number, followed by a new line.
 *@n: unsigned int.
 *@x: unsigned int
 *
 * Return: Always .
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list arguments;
	unsigned int x ;


	va_start(arguments, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", (va_arg(arguments, unsigned int)));

		if ((x != (n - 1)) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(arguments);
}
