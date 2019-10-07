#include "holberton.h"

/**
 * _strspn - check the code for Holberton School students.
 *@s: char
 *@accept: char
 * Return: Void.
 */

unsigned int _strspn(char *s, char *accept)
{

	unsigned int x, y;

	for (x = 0; s[x] != '\0' ; x++)
	{
		for (y = 0; accept[y] != '\0' ; y++)
		{
			if (accept[y] == s[x])
				break;
		}
		if (s[x] != accept[y])
			break;
	}
	return (x);
}
