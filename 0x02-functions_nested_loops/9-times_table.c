#include "holberton.h"
/**
 * times_table - check the code for Holberton School students.
 *
 * Return: Always .
 */
void times_table(void)
{
	int a;
	int b;
	int m;

	for (a = 0 ; a <= 9 ; a++)
	{
		for (b = 0 ; b <= 9 ; b++)
	{
		m = a * b;
		if (m < 10)
		{
			if (b > 0)
			{
				_putchar(' ');
			}
			_putchar((m % 10) + '0');
		}
		else
		{
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
		}
		if (b != 9)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
}
