#include "holberton.h"

/**
 *  print_line - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void print_line(int n)
{
	int b;

	if (n > 0)
	{
		for (b = 0 ; b <= n ; b++)
		{

		_putchar(95);
		}
	}
	_putchar('\n');
}
