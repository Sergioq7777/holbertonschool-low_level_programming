#include "holberton.h"
/**
 * print_numbers - check the code for Holberton School students.
 *
 * Return: Void.
 */
void print_numbers(void)
{
	int a;

	for (a = 0 ; a <= 9 ; a++)
	{
		_putchar(a + '0');
	}
	_putchar('\n');
}
