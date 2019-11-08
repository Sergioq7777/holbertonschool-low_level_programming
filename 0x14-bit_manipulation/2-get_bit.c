#include "holberton.h"

/**
 * get_bit - Function that returns the value of a bit at a given index.
 *@n: unsigned ling int
 *@index: unsigned int
 *
 * Return: int.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long cont;


	cont = sizeof(n) * 8;

	if (index > (cont - 1))
		return (-1);

	return ((n >> index) & 1);


}
