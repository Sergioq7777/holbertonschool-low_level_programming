#include "holberton.h"

#include "holberton.h"

/**
 * print_rev - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int a;

	for(a = '\0' ; s[a] <= 0 ; ++a)
		{
	while (*s)
	{
		_putchar(*s);
		++s;
	}
	_putchar('\n');
		}
}
