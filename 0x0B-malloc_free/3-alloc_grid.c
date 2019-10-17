#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - count the characters on a string
 * @width: char
 * @height: char
 * Return: char
 */
int **alloc_grid(int width, int height)
{
	int i;
	int **mtx;


	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	mtx = malloc(height * sizeof(int *));


	if (mtx == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < width ; i++)
	{
		*(mtx + i) = malloc(width * sizeof(int));

		if (mtx[i] == NULL)
		{
			while (i-- > 0)
				free(mtx[i]);
			free(mtx);
			return (NULL);

		}
	}
	return (mtx);
}
