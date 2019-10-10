#include "holberton.h"

/**
 * prime - check the code for Holberton School students.
 *@h: int
 *@a: int
 * Return: Always.
 */

int prime(int h, int a)
{
	int m = h % a;

	if (h <= 1)
	{
		return (0);
	}
	if (a < h && m == 0)
	{
		return (0);
	}

        if (a == h && m == 0)
	{
		return (1);
	}
	return (prime(h, a + 1));


/**
 * is_pirme_number - check the code for Holberton School students.
 *@n: int
 * Return: Always.
 */

int is_prime_number(int n)
{
	return (prime(0, n));
}
