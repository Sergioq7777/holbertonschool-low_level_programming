#include "holberton.h"

/**
 * prime - check the code for Holberton School students.
 *@h: int
 *@a: int
 * Return: Always.
 */

int prime(int p1, int n2)
{
	if (p1 == n2)
		return (1);
	if (n2 % p1 == 0 || n2 <= 1)
		return (0);
	else
		return (prime(p1 + 1, n2));
}

/**
 * is_pirme_number - check the code for Holberton School students.
 *@n: int
 * Return: Always.
 */

int is_prime_number(int n)
{
	return (prime(2, n));
}
