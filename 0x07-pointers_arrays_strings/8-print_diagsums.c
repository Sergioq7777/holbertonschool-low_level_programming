#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - check the code for Holberton School students.
 *@a: int
 *@size: int
 * Return: Void.
 */

void print_diagsums(int *a, int size)
{
	int x, y;
	int sum1 = 0;
	int sum2 = 0;

	for (x = 0; x < size; x++)
	{
		sum1 += a[(size + 1) * x];
	}
	for (y = 0; y < size; y++)
	{
		sum2 += a[(size - 1) * (y + 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
