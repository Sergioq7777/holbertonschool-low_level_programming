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
	unsigned long int match = 1;

	if ((sizeof(unsigned long int) * 8) - 1 < index)
	{
		return (-1);
	}
	start <<= index;
	*n &= ~match;

	return (1);
}
