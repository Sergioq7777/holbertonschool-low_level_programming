#include "holberton.h"

/**
 * *_memset - check the code for Holberton School students.
 *@s: char
 *@b: char
 *@n: integer
 * Return: Void.
 */

char *_memset(char *s, char b, unsigned int n)
{

	char *p = s;
	unsigned int x;

	for (x = 0 ; x < n ; ++x)
	{
		p[x] = b;
	}

	return (s);
}
