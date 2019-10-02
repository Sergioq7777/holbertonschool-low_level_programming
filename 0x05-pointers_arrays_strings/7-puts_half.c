#include "holberton.h"

/**
 * puts_half - check the code for Holberton School students.
 *@str: char.
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int c, mh, h, n;


	for (c = 0 ; str[c] != '\0' ; ++c)
		;

	h  = c / 2;
	mh = c % 2;

	if (mh == 0)
	{
		for (; h < c ; ++h)
		{
		_putchar(str[h]);
		}
	}
	else
	{
		h++;
		n = (h - 1) / 2;
		for (;h < c ;h++)
		{
		_putchar(str[h]);
		}
	}
	_putchar('\n');
}
