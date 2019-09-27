#include "holberton.h"
/**
 *  print_diagonal - check the code for Holberton School students.
 *@n : integer
 *@v : intiger
 *@h : intiger
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int v;
	int h;

	if (n > 0)
	{
		for (v = 1 ; v <= n ; v++)
		{
			for (h = 1 ; h <= n ; h++)
			{
				if (h < v)
				{
					_putchar(' ');
				}
			}
			_putchar ('\\');
			_putchar ('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
