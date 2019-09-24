#include "holberton.h"

int print_last_digit(int n)
{
	int l = n % 10;

	if (l < 0)
	{
		_putchar((l * -1) + '0');
	}
	else
	{
		_putchar(l + '0');
	}
	return (1);
}
