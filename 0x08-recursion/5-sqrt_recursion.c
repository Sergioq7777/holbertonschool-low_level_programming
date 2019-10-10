#include "holberton.h"

/**
 * _square - check the code for Holberton School students.
 *@h: int
 *@a: int
 * Return: Always.
 */

int _square(int h, int a)
{
	if (h * h == a)
	{
		return (h);
	}
	else if (h * h > a)
	{
		return (-1);
	}
	else
	{
		return (_square(h + 1, a));
	}
}
/**
 * _sqrt_recursion - check the code for Holberton School students.
 *@n: int
 * Return: Always.
 */

int _sqrt_recursion(int n)
{

	if (n < 0)
	{
		return (-1);
	}

	return (_square(0, n));

}
