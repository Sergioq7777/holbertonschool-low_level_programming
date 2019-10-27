#include "variadic_functions.h"

/**
 * print_strings - function that prints number, followed by a new line.
 *@separator: char.
 *@n: unsigned int
 *
 * Return: Always .
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

	va_list arguments;
	unsigned int x;
	char *y;

	va_start(arguments, n);

	for (x = 0; x < n; x++)
	{
		y = va_arg(arguments, char *);

		if (y != NULL)
		{
			printf("%s", y);
		}
		else
		{
			printf("(nil)");/**if one of the string isNULL print. */
		}
		if ((x != (n - 1)) && separator != NULL)
		{/**if the separator is null don't print it*/
			printf("%s", separator);
		}
		va_end(arguments);
	}
	printf("\n");/** Print a new line at the end of the function*/
}
