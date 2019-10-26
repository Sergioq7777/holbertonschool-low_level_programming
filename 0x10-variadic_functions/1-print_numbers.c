#include "variadic_functions.h"

/**
 * print_numbers - function that prints number, followed by a new line.
 *@n: unsigned int.
 *@separator: char
 *
 * Return: No return .
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list arguments;/** va_list arguments pointer varibles */
	unsigned int x;


	va_start(arguments, n);/** va_start initializes the argument pointer */

	for (x = 0; x < n; x++)
	{
		printf("%d", (va_arg(arguments, unsigned int)));/**return next argumment */

		if ((x != (n - 1)) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(arguments);
}
