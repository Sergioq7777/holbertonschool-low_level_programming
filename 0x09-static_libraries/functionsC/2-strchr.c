#include "holberton.h"

/**
 * *_strchr - check the code for Holberton School students.
 *@s: char
 *@c: char
 * Return: Void.
 */

char *_strchr(char *s, char c)
{

	for (; *s != c && *s != '\0' ; s++)
		;
	if (*s == c)
	{
		return (s);
	}
	else
	{
		return ('\0');
	}
}
