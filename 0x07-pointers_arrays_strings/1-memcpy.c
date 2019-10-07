#include "holberton.h"

/**
 * *_memcpy - check the code for Holberton School students.
 *@dest: char
 *@src: char
 *@n: integer
 * Return: Void.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *s = dest;
	char *q = src;
	unsigned int x;


	for (x = 0 ; x < n ; ++x)
	{
		s[x] = q[x];
	}

	return (dest);
}
