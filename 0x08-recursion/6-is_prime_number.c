#include "holberton.h"
#include <stdio.h>

/**
 * _prime - check the code for Holberton School students.
 *@p1: int
 *@n2: int
 * Return: Always.
 */

int _prime(int p1, int n2)
{
	if (p1 == n2)
		return (1);
	if (n2 % p1 == 0 || n2 <= 1)
		return (0);
	else
		return (_prime(p1 + 1, n2));
}

/**
 * is_prime_number - check the code for Holberton School students.
 *@n: int
 * Return: Always.
 */

int is_prime_number(int n)
{
	return (_prime(2, n));
}
