#include "variadic_functions.h"

/**
 * print_string - function that prints number, followed by a new line.
 *@n: unsigned int.
 *@x: unsigned int
 *
 * Return: Always .
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

	va_list arguments;
	unsigned int x;
	char *y;

	va_start(arguments, n);

	for (x = 0; x < n; x+)
	{
		y = (va_arg(arguments, char *));

		if (y != NULL)
		{
			printf("%s", y);
		}
		else
		{
			printf("(nil)");
		}
		if ((x != (n - 1)) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(arguments);
}
