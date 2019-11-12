#include "holberton.h"

/**
 * flip_bits - function that returns the number of bits - to flip.
 * @n: unsigned int.
 * @m:unsigned int.
 *
 * Return: int.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num, tmp;

	tmp = n ^ m;
	num = 0;

	while (tmp)
	{
		num = num + (tmp & 1);
		tmp >>= 1;
	}
	return (num);
}
