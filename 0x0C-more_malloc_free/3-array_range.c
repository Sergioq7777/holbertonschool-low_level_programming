#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - function that creates an array of integers.
 * @min: int 
 * @max: int
 * Return: Never.
 */

int *array_range(int min, int max)

{

	int i, y;
	char *cont;

	if (min > max)
	{
		return (NULL);
	}

	y = max * min;
	cont = malloc(y);

	if(cont == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < y; i++)
	{
		cont[i] = min;
	}

	return (cont);
}
