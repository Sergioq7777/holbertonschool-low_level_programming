#include "holberton.h"

/**
 * binary_to_uint - Function that converts a binary number to an unsigned int.
 *@b:char
 *
 * Return: unsigned int.
 */

unsigned int binary_to_uint(const char *b)
{


	unsigned int size, match, tmp = 0;

	if (b == NULL)
		return (0);

	for (size = 0; b[size]; size++)
	{

	}
	size--;

	for (match = 0; b[match]; match++, size--)
	{
		if (b[match] != '0' && b[match] != '1')
		{
			return (0);
		}
		else
		{
			tmp += (b[match] - '0') << size;
		}

	}

	return (tmp);
}
