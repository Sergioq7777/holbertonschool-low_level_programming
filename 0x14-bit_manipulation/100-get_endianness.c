#include "holberton.h"

/**
 * get_endianness - function that returns the number of bits - to flip.
 *
 * Return: int.
 */

int get_endianness(void)
{
	int match;
	unsigned int cont;

	cont = 1;
	match = (int) (((char *)&cont)[0]);
	return (match);
}
