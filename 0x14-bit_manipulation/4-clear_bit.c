#include "holberton.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 * @n: unsigned int.
 * @index:unsigned int.
 *
 * Return: int.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int match;

	if (index > sizeof(n) * 8 - 1)
		return (-1);
	match = (*n >> index) & 1;
	if (bit == 1)
		*n = *n - (1 << index);
	return (1);
}
