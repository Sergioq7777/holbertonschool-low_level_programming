#include "holberton.h"

/**
 * factorial - check the code for Holberton School students.
 *@n: int
 * Return: Void.
 */

int factorial(int n)
{
	if (n <= 0)
	{
		return (-1);
	}
	else
	{
		n = n * factorial(n - 1);
	}
	return (n);
}
