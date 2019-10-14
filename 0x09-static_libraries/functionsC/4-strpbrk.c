#include "holberton.h"

/**
 * *_strpbrk - check the code for Holberton School students.
 *@s: char
 *@accept: char
 * Return: Void.
 */

char *_strpbrk(char *s, char *accept)
{

	int x, y;

	for (x = 0 ; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				s = s + x;
				return (s);
			}
		}
	}
	return (0);
}
