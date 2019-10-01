#include "holberton.h"

/**
 * _puts - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
