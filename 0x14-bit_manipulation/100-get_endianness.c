#include "holberton.h"

/**
 * get_endianness - function that returns the number of bits - to flip.
 *
 * Return: int.
 */

int get_endianness(void)
{
	unsigned int cont = 1;
	char *match = (char *)&cont;

	if (*match)
		return (1);
	else
		return (0);
}
