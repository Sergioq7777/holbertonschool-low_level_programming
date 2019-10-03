#include "holberton.h"

/**
 * *_strcmp - check the code for Holberton School students.
 *@s1: char
 *@s2: char
 * Return: Void.
 */

int _strcmp(char *s1, char *s2)
{
	for (; *s1 != '\0' && *s2 != '\0' && *s1 == *s2 ; s1 ++, s2++)
		;
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}
