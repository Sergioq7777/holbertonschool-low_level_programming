#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: Never.
 */

void *_calloc(unsigned int nmemb, unsigned int size)

{
	unsigned int i, mul = 0;
	char *mtx;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	mul = nmemb * size;
	mtx = malloc(mul);

	if (mtx == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < mul; i++)
	{
		mtx[i] = 0;
	}

	return (mtx);
}
