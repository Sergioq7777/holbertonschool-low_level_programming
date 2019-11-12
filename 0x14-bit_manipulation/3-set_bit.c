#include "holberton.h"

/**
 * set_bit - Function that Sets the bit at given index.
 * @n: unsigned int.
 * @index:unsigned int.
 *
 * Return: int.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num;

	if (index > 64)
		return (-1);

	num = 0;

	while (num <= index)
	{
		*n = (*n | 1 << index);
		num++;
	}
	return (1);
}
