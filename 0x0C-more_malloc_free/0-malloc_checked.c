#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked -  allocates memory using malloc.
 * @b: int
 * Return: Never.
 */

void *malloc_checked(unsigned int b)

{
	void *m;

	m = malloc(b);

	if (m == NULL)
	{
		exit(98);
	}

	return (m);
}
