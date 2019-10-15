#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - Array of chars, and initializes it with a specific char
 * @c: char
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */

char *create_array(unsigned int size, char c)
{
	char *p1;
	unsigned int x = 0;

	p1 = malloc(sizeof(char) * size);

	if ((size != 0) && (p1 != '\0'))
	{
		while (x < size)
		{
			p1[x] = c;
			x++;
		}
		return (p1);
	}
	else
	{
		return ('\0');
	}
}
