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
	int i, j, c, y;
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
		mtx[i] = malloc(width * sizeof(int));

		if (mtx[i] == NULL)
		{
			for (c = 0 ; c < i ; c++)
			{
				free(mtx[i]);
			}

			free(mtx);
			return (NULL);
		}
	}
	for (j = 0; j < height; j++)
	{
		for (y = 0; y < width; y++)
		{
			mtx[j][y] = 0;
		}
	}
	return (mtx);
}
