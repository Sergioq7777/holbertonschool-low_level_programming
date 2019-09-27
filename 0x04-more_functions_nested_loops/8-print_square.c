#include "holberton.h"

/**
 *  print_square - check the code for Holberton School students.
 *@size : integer
 * Return: Void.
 */

void print_square(int size)
{
	int a;
	int b;

	if (size > 0)
	{
		for (a = 1 ; a <= size ; a++)
		{
			for (b = 1 ; b <= size ; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
