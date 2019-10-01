#include "holberton.h"
/**
 * print_triangle - check the code for Holberton School students.
 *@size : integer
 * Return: Void.
 */

void print_triangle(int size)
{
	int v;
	int h;

	if (size > 0)
	{
		for (v = 1 ; v <= size ; v++)
		{
			for (h = 1 ; h <= size ; h++)
			{
				if (h <= size - v)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar ('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
