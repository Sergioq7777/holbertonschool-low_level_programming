#include "holberton.h"

/**
 * print_rev - check the code for Holberton School students.
 *@s: integer
 * Return:  void.
 */

void print_rev(char *s)
{
	int cont, rev;

	while (*s != '\0')
	{
		s++;
		cont++;
	}
	for (rev = cont ; rev >= 0 ; --rev)
	{
		if (rev != cont)
		{
			_putchar(*s);
		}
		--s;
	}

	_putchar('\n');
}
