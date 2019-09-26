#include "holberton.h"
/**
 *  print_line - check the code for Holberton School students.
 *@n : initeger
 * Return: Always 0.
 */

void print_line(int n)
{
	int b;

	if (n >= 0)
	{

		for (b = 1 ; b <= n ; b++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
