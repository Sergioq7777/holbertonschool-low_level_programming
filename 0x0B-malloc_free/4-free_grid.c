#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - count the characters on a string
 * @grid: int
 * @height: int
 * Return: char
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0 ; i < height ; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
