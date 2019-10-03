#include "holberton.h"

/**
 * reverse_array - check the code for Holberton School students.
 *@a: integer
 *@n: integer
 * Return: Void.
 */

void reverse_array(int *a, int n)
{

	int y, s;

	for (y = 0 ; y < n ; ++y)
	{
		s = a[y];
		a[y] = a[n - 1];
		a[n - 1] = s;
		n--;
	}
}
