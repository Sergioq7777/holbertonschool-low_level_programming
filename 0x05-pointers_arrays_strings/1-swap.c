#include"holberton.h"

/**
 * swap_int - check the code for Holberton School students.
 *@a : integer
 *@b : integer
 *@z : integer
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int z;

	z =  *a;
	*a = *b;
	*b =  z;
}
